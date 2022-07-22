class Solution {
public:
    int numDifferentIntegers(string word) {
        //Ignoring the integers here
        int n = word.length();
        unordered_set<string>s;
        int i=0;
        while(i<n){
            if(isdigit(word[i]) == false){
                i++;
                continue;
            }
            
            //1 part ends here
            
            //Digits starts from here
            string temp = "";
            while(i<n && isdigit(word[i])){
                temp+=word[i];
                i++;
            }
            //Taking digits ends here
            //Here we are taking the aplhabet and numbers pair
            
            //Ignoring zero's here
            int j=0;
            while(j<temp.length() && temp[j] == '0')
                j++;
            temp = temp.substr(j);
            s.insert(temp);
        }
        return s.size();
    }
};