class Cashier {
public:
    unordered_map<int, int> tags;
    int cnt, mod;
    double pct;
    
    Cashier(int n, int discount, vector<int>& products, vector<int>& prices) {
        cnt = 0;
        mod = n;
        pct = (100.0 - discount) / 100.0;
        for (int i = 0; i < products.size(); ++i)
            tags[products[i]] = prices[i];
    }
    
    double getBill(vector<int> product, vector<int> amount) {
        cnt++;
        double ans(0.0);
        for (int i = 0; i < product.size(); ++i)
            ans += tags[product[i]] * amount[i];
        return cnt % mod ? ans : ans * pct;
    }
};