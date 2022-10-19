# Longest consecutive subsequence
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the<strong style="user-select: auto;"> consecutive numbers can be in any order.</strong></span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 7
a[] = {2,6,1,9,4,5,3}
<strong style="user-select: auto;">Output:
</strong>6<strong style="user-select: auto;">
Explanation:
</strong>The consecutive numbers here
are 1, 2, 3, 4, 5, 6. These 6 
numbers form the longest consecutive
subsquence.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 7
a[] = {1,9,3,10,4,20,2}
<strong style="user-select: auto;">Output:
</strong>4<strong style="user-select: auto;">
Explanation:
</strong>1, 2, 3, 4 is the longest
consecutive subsequence.</span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">findLongestConseqSubseq()</strong>&nbsp;which takes the array arr[] and the size of the array as inputs and returns the length of the longest subsequence of consecutive integers.&nbsp;</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N).</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
0 &lt;= a[i] &lt;= 10<sup style="user-select: auto;">5</sup></span></p>
</div>