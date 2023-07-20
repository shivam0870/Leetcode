class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int i = 0, j = 0, n = s.size(), ans = INT_MIN;
        int cnt = 0;
        int p;
        if(s.size() == 0)
            return 0;
        while( i<n && j<n)
            {
            if(set.find(s[j]) == set.end()) 
			{
				set.insert(s[j]);
                j++;
				// ans = max(ans, j-i);
               p  = set.size();
                ans = max(ans,p);
				//Soluution outdated
                
                
			}
			else
			{
				set.erase(s[i++]);
                // i++;
			
			}
		}
    
		return ans;
    }
};
