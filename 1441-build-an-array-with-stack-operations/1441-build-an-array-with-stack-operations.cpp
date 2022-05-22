class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> vec;
        string push = "Push";
        string pop = "Pop";
        int number = 1;
        for(int i=0; i<target.size(); i++){
            while(number != target[i]){
                number++;
                 vec.push_back("Push");
                vec.push_back("Pop");
            }
             vec.push_back("Push");
                
            number++;
            
        }
        return vec;
    }
};