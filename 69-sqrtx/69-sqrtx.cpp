class Solution {
public:
    int mySqrt(int x) {
        if(x==1)return 1 ; 
        int l = 1 ; 
        int h = x/2;
        while(l<=h){
            long long mid = l + (h-l)/2;
            if(mid*mid == x )
                return mid;
            
            else if(mid*mid > x )
                h = mid-1;
            else 
                l = mid+1;
        }
        return l-1 ;
    }
};