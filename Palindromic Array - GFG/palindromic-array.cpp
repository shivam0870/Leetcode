//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
bool isPalindromic(int num){
        int n=num;
        int rev=0;
        
        while(n>0){
            int digit=n%10;
            rev=rev*10+digit;
            n/=10;
        }
        
        if(num==rev)
             return true;
             
        return false;
    }
    int PalinArray(int a[], int n)
    {
    for(int i=0;i<n;i++){
    	    if(isPalindromic(a[i])==false)
    	          return 0;
    	}
    	return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends