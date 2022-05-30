<h2><a href="https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/">1413. Minimum Value to Get Positive Step by Step Sum</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of integers&nbsp;<code style="user-select: auto;">nums</code>, you start with an initial <strong style="user-select: auto;">positive</strong> value <em style="user-select: auto;">startValue</em><em style="user-select: auto;">.</em></p>

<p style="user-select: auto;">In each iteration, you calculate the step by step sum of <em style="user-select: auto;">startValue</em>&nbsp;plus&nbsp;elements in <code style="user-select: auto;">nums</code>&nbsp;(from left to right).</p>

<p style="user-select: auto;">Return the minimum <strong style="user-select: auto;">positive</strong> value of&nbsp;<em style="user-select: auto;">startValue</em> such that the step by step sum is never less than 1.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [-3,2,-3,4,2]
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation: </strong>If you choose startValue = 4, in the third iteration your step by step sum is less than 1.
<strong style="user-select: auto;">step by step sum</strong>
<strong style="user-select: auto;">startValue = 4 | startValue = 5 | nums</strong>
  (4 <strong style="user-select: auto;">-3</strong> ) = 1  | (5 <strong style="user-select: auto;">-3</strong> ) = 2    |  -3
  (1 <strong style="user-select: auto;">+2</strong> ) = 3  | (2 <strong style="user-select: auto;">+2</strong> ) = 4    |   2
  (3 <strong style="user-select: auto;">-3</strong> ) = 0  | (4 <strong style="user-select: auto;">-3</strong> ) = 1    |  -3
  (0 <strong style="user-select: auto;">+4</strong> ) = 4  | (1 <strong style="user-select: auto;">+4</strong> ) = 5    |   4
  (4 <strong style="user-select: auto;">+2</strong> ) = 6  | (5 <strong style="user-select: auto;">+2</strong> ) = 7    |   2
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> Minimum start value should be positive. 
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,-2,-3]
<strong style="user-select: auto;">Output:</strong> 5
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-100 &lt;= nums[i] &lt;= 100</code></li>
</ul>
</div>