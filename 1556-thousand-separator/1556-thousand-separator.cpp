class Solution {
public:
    string thousandSeparator(int n) {
//       string x=to_string(n);
//         string ans="";
//         int ss=x.size();
//         int count=0;
        
//         for(int i=ss-1;i>=0;i--){
//             if(count==3){
//                 ans='.'+ans;
//                 count=0;
//             }
//             count++;
//             ans=x[i]+ans;
//         }
//         return ans;
            
        string s = to_string(n);
        string ans = "";
        int len = s.size();
        int cnt = 0;
        for(int i=len-1; i>=0; i--){
            if(cnt==3){
                ans = '.'+ans;
                cnt=0;
            }
            cnt++;
            ans = s[i] + ans  ;
        }
        return ans;
        
    }
};