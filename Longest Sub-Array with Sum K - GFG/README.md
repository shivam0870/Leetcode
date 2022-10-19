# Longest Sub-Array with Sum K
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;">Given an array containing <strong style="user-select: auto;">N</strong> integers and an integer <strong style="user-select: auto;">K</strong>., Your task is to find the length of the longest Sub-Array with the sum of the elements equal to the given value <strong style="user-select: auto;">K</strong>. </span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span><br style="user-select: auto;">
&nbsp;</p>

<pre style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Input :
</strong>A[] = {10, 5, 2, 7, 1, 9</span><span style="font-size: 20px; user-select: auto;">}
K = 15
<strong style="user-select: auto;">Output :</strong> 4
<strong style="user-select: auto;">Explanation:
</strong>The sub-array is <strong style="user-select: auto;">{5, 2, 7, 1}</strong>.
</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 20px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 22px; user-select: auto;"><strong style="user-select: auto;">Input :</strong> 
A[] = {-1, 2, 3}
K = 6</span>
<span style="font-size: 22px; user-select: auto;"><strong style="user-select: auto;">Output :</strong> 0
</span><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Explanation: 
</strong></span><span style="font-size: 20px; user-select: auto;">There is no such sub-array with sum 6.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong style="user-select: auto;">lenOfLongSubarr()</strong> that takes an array <strong style="user-select: auto;">(A)</strong>, sizeOfArray <strong style="user-select: auto;">(n)</strong>,&nbsp; sum&nbsp;<strong style="user-select: auto;">(K)</strong>and <strong style="user-select: auto;">returns</strong> the required length of the longest Sub-Array</span><span style="font-size: 20px; user-select: auto;">. The driver code takes care of the printing.</span></p>

<p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N).</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 20px; user-select: auto;">1&lt;=N&lt;=10<sup style="user-select: auto;">5</sup></span><br style="user-select: auto;">
<span style="font-size: 20px; user-select: auto;">-10<sup style="user-select: auto;">5</sup>&lt;=A[i], K&lt;=10<sup style="user-select: auto;">5</sup></span><br style="user-select: auto;">
&nbsp;</p>
</div>