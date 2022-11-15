# Interesting Queries
## Hard
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array nums<strong style="user-select: auto;">&nbsp;</strong>of n&nbsp;elements and q queries . Each query consists of two integers l and r .&nbsp;You task is to find&nbsp;the number of elements of nums[]&nbsp;in range [l,r] which&nbsp;occur atleast k&nbsp;times.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>nums = {1,1,2,1,3}, Queries = {{1,5},
{2,4}}, k = 1
<strong style="user-select: auto;">Output: </strong>{3,2}
<strong style="user-select: auto;">Explanation: </strong>For the 1st query, from l=1 to r=5
1, 2 and 3 have the frequency atleast 1.
For the second query, from l=2 to r=4, 1 and 2 have 
the frequency atleast 1.</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>nums = {1,2,3,1}, Queries = {{1,4},
{2,4},{4,4}, k = 2
<strong style="user-select: auto;">Output: </strong>{1,0,0}
<strong style="user-select: auto;">Explanation: </strong>For the 1st query, from l=1 to r=4
1 have the frequency atleast 2.
For the second query, from l=2 to r=4, no number has 
the frequency atleast 2.
For the third query, from l=4 to r=4, no number has 
the frequency atleast 2.</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your task is to complete the function&nbsp;<strong style="user-select: auto;">solveQueries()&nbsp;</strong>which takes nums, Queries and k as input parameter and returns a list containg the answer for each query.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n*sqrt(n)*log(n))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Compelxity:&nbsp;</strong>O(n)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= n, no of Queries, k &lt;= 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">3</sup></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 &lt;= Queries[i][0] &lt;= Queries[i][1] &lt;= n</span></p>
</div>