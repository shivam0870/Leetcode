class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int f=0,c=0;
      for(auto it : s){
          if(it == '0')
              f++;
          else
              c++;
          f=min(f,c);
      }
        return f;
    }
};