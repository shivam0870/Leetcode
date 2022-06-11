// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

    
    class Solution{
   public:
       void nullPoints(int n, double magnets[], double getAnswer[])
   {
       for(int i=0;i<n-1;i++){
           getAnswer[i]=neutral_point(magnets[i],magnets[i+1],magnets,n);
       }
   }
   double neutral_point(double low,double high,double magnets[],int n){
         while(low<high){
           double mid=  (low+high)/2;
           double totalforce=0;
           for(int i=0;i<n;i++){
               totalforce+=1/(mid-magnets[i]);
           }
           if(abs(totalforce)<0.000001)
           return mid;
           if(totalforce<0)
           high=mid;
           else
           low=mid;
       }
       return low;
   }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double magnets[n], getAnswer[n];
        for(int i=0;i<n;i++)
        cin>>magnets[i];
        Solution ob;
        ob.nullPoints(n, magnets, getAnswer);
        
        for(int i=0; i<n-1; i++)
            printf("%0.2lf ",getAnswer[i]);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends