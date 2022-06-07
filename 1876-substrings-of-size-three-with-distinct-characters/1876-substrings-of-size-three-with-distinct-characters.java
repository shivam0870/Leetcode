class Solution {
    public int countGoodSubstrings(String s) {
        int result = 0;
	for(int i=1;i<s.length()-1;i++)
		if(s.charAt(i-1) != s.charAt(i) && s.charAt(i+1) != s.charAt(i) && s.charAt(i+1) != s.charAt(i-1))
			result++;
	return result;
    }
}