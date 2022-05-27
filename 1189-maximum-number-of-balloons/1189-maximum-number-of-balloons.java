class Solution {
    public int maxNumberOfBalloons(String text) {
       
        int [] freq = new int[26]; //This array is used to count the frequency of the array 
        for(char ch : text.toCharArray()){
            freq[ch - 'a']++; //Frequency ++
        }
        
        char [] balloon = new char[]{'b' , 'a' , 'l' , 'o' , 'n'};
        int minfreq = Integer.MAX_VALUE;
        for(char c : balloon){
            if(c == 'l' || c == 'o'){
            freq[c-'a'] = freq[c-'a']/2;
            }
        
        minfreq = Math.min(minfreq , freq[c-'a']);
    }
    return minfreq;
        
    }
}