class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int i = 0, j = 0, n = s.size(), ans = 0;
        int cnt = 0;
        int p;
        while( i<n && j<n)
            {
            if(set.find(s[j]) == set.end()) 
			{
				set.insert(s[j]);
                j++;
				// ans = max(ans, j-i);
               p  = set.size();
                ans = max(ans,p);
                
                
			}
			else
			{
				set.erase(s[i]);
                i++;
			
			}
		}
    
		return ans;
    }
};