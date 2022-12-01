class Solution {
    public boolean halvesAreAlike(String s) {
         s = s.toLowerCase();
        int count1 = 0;
        int count2 = 0;
        char ch1[] = s.substring(0,(s.length()+1)/2).toCharArray();
        char ch2[] = s.substring(s.length()/2,s.length()).toCharArray();
        for(char ch : ch1){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                count1++;
            }    
        }
        for(char chr : ch2){
            if(chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u'){
                count2++;
            }    
        }
        return count1 == count2;
    }
}