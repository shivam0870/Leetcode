//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            String[] S = br.readLine().trim().split(" ");
            int n = Integer.parseInt(S[0]);
            int q = Integer.parseInt(S[1]);
            int k = Integer.parseInt(S[2]);
            int[] nums = new int[n];
            String[] S1 = br.readLine().trim().split(" ");
            for(int i = 0; i < n; i++)
                nums[i] = Integer.parseInt(S1[i]);
            int[][] Queries = new int[q][2];
            for(int i = 0; i < q; i++){
                String[] S3 = br.readLine().trim().split(" ");
                for(int j = 0; j < S3.length; j++){
                    Queries[i][j] = Integer.parseInt(S3[j]);
                }
            }
            Solution obj = new Solution();
            int[] ans = obj.solveQueries(nums, Queries, k);
            for(int i = 0; i < ans.length; i++)
                System.out.println(ans[i]);
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution
{
    public int[] solveQueries(int[] nums, int[][] Queries, int k)
    {
          HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();
        ArrayList<Integer> counts = new ArrayList<Integer>();
        
        for(int i=0; i<Queries.length; i++){
            
            map.clear();
             
            int l = Queries[i][0] - 1;  // to make 0-based index 
            int r = Queries[i][1] - 1;
            
            for(int j = l; j<=r; j++){
                    
                if(map.containsKey(nums[j])){
                    map.put(nums[j], map.get(nums[j])+1);
                }
                else{
                    map.put(nums[j],1);
                }
            }
            
            int count = 0;
            for(Map.Entry<Integer, Integer> entry : map.entrySet()){
                if(entry.getValue() >= k) count++;
                else continue;
            }
            counts.add(count);
        }
        
        int arr[] = new int[counts.size()];
        for(int i=0; i<arr.length; i++)
            arr[i] = counts.get(i);
            
        return arr;
    }
}