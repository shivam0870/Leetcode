class Solution {
    public int secondHighest(String s) {
        int largest=-1;
        int secondLargest=-1;
        
        HashSet<Integer> digits=new HashSet<>();
        for(char ch:s.toCharArray()){
          if(ch>='0' && ch<='9'){
             int digit=ch-'0';
              digits.add(digit);
          }
        }
        // char[] ch = new char[digits.size()];
        int [] ch = new int[digits.size()];
        int it =0 ;
        for(int ele : digits){
            ch[it++] = ele;
        }
        Arrays.sort(ch);
        if(digits.size() < 2)
            return -1;
        return ch[digits.size() - 2];
    }
}