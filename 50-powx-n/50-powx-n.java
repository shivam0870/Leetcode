class Solution {
    public double myPow(double x, int n) {
     if(n==0)return 1;
        if(n==1)return x;
        
         if(n<0)return 1/x*myPow(1/x,Math.abs(n+1));
          return (n&1)==0?myPow(x*x,n/2):x*myPow(x*x,n/2);
        
    }
}