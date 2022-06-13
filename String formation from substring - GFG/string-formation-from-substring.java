// { Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String input = read.readLine();
            
            Solution ob = new Solution();
            int result = ob.isRepeat(input);
            
            System.out.println(result);
        }
    }
}// } Driver Code Ends


//User function Template for Java

class Solution {
    int isRepeat(String s) {
       
        int len = s.length();
    
       for(int i = 1; i<=len/2;i++)
       {
           if(len%i == 0 && s.substring(0,(len-i)).equals(s.substring(i)))
           {
               return 1;
           }
       }
       
       return 0;
    }
}