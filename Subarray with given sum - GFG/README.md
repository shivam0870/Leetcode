# Subarray with given sum
## Easy
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an unsorted array <strong style="user-select: auto;">A </strong>of size <strong style="user-select: auto;">N</strong> that contains only&nbsp;non-negative integers, find a continuous sub-array which adds to a given number <strong style="user-select: auto;">S</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">In case of multiple subarrays, return the subarray which comes first on moving from left to right.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 5, S = 12
A[] = {1,2,3,7,5}
<strong style="user-select: auto;">Output: </strong>2 4<strong style="user-select: auto;">
Explanation: </strong>The sum of elements 
from 2nd position to 4th position 
is 12.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 10, S = 15
A[] = {1,2,3,4,5,6,7,8,9,10}
<strong style="user-select: auto;">Output: </strong>1 5<strong style="user-select: auto;">
Explanation: </strong>The sum of elements 
from 1st position to 5th position
is 15.</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. The task is to complete the function <strong style="user-select: auto;">subarraySum</strong>() which takes arr, N and S as input parameters and returns an <strong style="user-select: auto;">arraylist&nbsp;</strong>containing the&nbsp;<strong style="user-select: auto;">starting </strong>and <strong style="user-select: auto;">ending </strong>positions&nbsp;of the&nbsp;first such occurring subarray from the left where sum equals to S. The two indexes in the array should be according to 1-based indexing. If no such subarray is found, return an array consisting only one element that is -1.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= A</span><sub style="user-select: auto;">i</sub><span style="font-size: 18px; user-select: auto;"> &lt;= 10<sup style="user-select: auto;">9</sup></span></p>

<p style="user-select: auto;">&nbsp;</p>
</div>