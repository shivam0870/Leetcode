# Chocolate Distribution Problem
## Easy
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">A[ ]</strong> of positive integers of size <strong style="user-select: auto;">N</strong>, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are <strong style="user-select: auto;">M</strong> students, the task is to distribute chocolate packets among <strong style="user-select: auto;">M</strong> students&nbsp;such that :</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1. Each student gets <strong style="user-select: auto;">exactly</strong> one packet.<br style="user-select: auto;">
2. The difference between maximum number of chocolates given to a student and minimum&nbsp;number of chocolates given to a student is minimum.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 8, M = 5</span>
<span style="font-size: 18px; user-select: auto;">A = {3, 4, 1, 9, 56, 7, 9, 12}<strong style="user-select: auto;">
Output: </strong>6
<strong style="user-select: auto;">Explanation: </strong>The minimum difference between 
maximum chocolates and minimum chocolates 
is 9 - 3 = 6 by choosing following M packets :
{3, 4, 9, 7, 9}.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 7, M = 3</span>
<span style="font-size: 18px; user-select: auto;">A = {7, 3, 2, 4, 9, 12, 56}
<strong style="user-select: auto;">Output: </strong>2
<strong style="user-select: auto;">Explanation: </strong>The minimum difference between
maximum chocolates and minimum chocolates
is 4 - 2 = 2 by choosing following M packets :
{3, 2, 4}.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your&nbsp;Task:</strong><br style="user-select: auto;">
You don't need to take any input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">findMinDiff()&nbsp;</strong>which takes array A[ ], N and M as input parameters&nbsp;and returns the minimum possible difference&nbsp;between maximum number of chocolates given to a student and minimum&nbsp;number of chocolates given to a student.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N*Log(N))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ T ≤&nbsp;100<br style="user-select: auto;">
1&nbsp;≤&nbsp;N&nbsp;≤&nbsp;10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 ≤&nbsp;A<sub style="user-select: auto;">i</sub> ≤&nbsp;10<sup style="user-select: auto;">9</sup><br style="user-select: auto;">
1 ≤&nbsp;M ≤&nbsp;N</span></p>
</div>