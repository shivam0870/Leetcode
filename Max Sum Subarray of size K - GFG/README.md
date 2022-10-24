# Max Sum Subarray of size K
## Easy
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array of integers Arr of size <strong style="user-select: auto;">N</strong> and a number <strong style="user-select: auto;">K</strong>. Return&nbsp;the maximum sum of a subarray of size K.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong>
<span style="font-size: 18px; user-select: auto;">N = 4, K = 2
Arr = [100, 200, 300, 400]</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Output:</span></strong>
<span style="font-size: 18px; user-select: auto;">700</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Explanation:</span></strong>
<span style="font-size: 18px; user-select: auto;">Arr<sub style="user-select: auto;">3 </sub> + Arr<sub style="user-select: auto;">4</sub> =700,</span>
<span style="font-size: 18px; user-select: auto;">which is maximum.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong>
<span style="font-size: 18px; user-select: auto;">N = 4, K = 4</span>
<span style="font-size: 18px; user-select: auto;">Arr = [100, 200, 300, 400]</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Output:</span></strong>
<span style="font-size: 18px; user-select: auto;">1000</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Explanation:</span></strong>
<span style="font-size: 18px; user-select: auto;">Arr<sub style="user-select: auto;">1</sub> + Arr<sub style="user-select: auto;">2</sub> + Arr<sub style="user-select: auto;">3 </sub> 
+ Arr<sub style="user-select: auto;">4</sub> =1000,</span>
<span style="font-size: 18px; user-select: auto;">which is maximum.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything. Your task is to complete the function maximumSumSubarray() which takes the integer k, vector Arr with size N,&nbsp;containing the elements of the array and returns the&nbsp;maximum sum of a subarray of size K.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=N&lt;=10<sup style="user-select: auto;">6</sup></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1&lt;=K&lt;=N</span><br style="user-select: auto;">
&nbsp;</p>
</div>