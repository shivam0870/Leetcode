// { Driver Code Starts
//Initial Template for JAVA

import java.io.*;
import java.util.*;

public class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            
            String S1 = read.readLine();
            String S2 = read.readLine();

            Solution ob = new Solution();

            System.out.println(ob.findTime(S1,S2));
        }
    }
}// } Driver Code Ends


//User function Template for Java

class Solution {
    static int findTime(String S1 , String S2) {
        // code here
        int i,j,c=0;
       c+=S1.indexOf(S2.charAt(0));
       for(i=1;i<S2.length();i++)
       {
           j=Math.abs(S1.indexOf(S2.charAt(i))-S1.indexOf(S2.charAt(i-1)));
           c+=j;
       }
       return c;
    }
};