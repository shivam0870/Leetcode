class Solution {
    public String longestCommonPrefix(String[] strs) {
        String ans = strs[0];
        int len = strs.length;
        for(int i=0; i<len; i++){
            while(strs[i].indexOf(ans) != 0){
                ans = ans.substring(0,ans.length() -1);
            }
        }
        if(ans.isEmpty())
            return "";
        return ans;
    }
}