<h2><a href="https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts/">2357. Make Array Zero by Subtracting Equal Amounts</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a non-negative integer array <code style="user-select: auto;">nums</code>. In one operation, you must:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Choose a positive integer <code style="user-select: auto;">x</code> such that <code style="user-select: auto;">x</code> is less than or equal to the <strong style="user-select: auto;">smallest non-zero</strong> element in <code style="user-select: auto;">nums</code>.</li>
	<li style="user-select: auto;">Subtract <code style="user-select: auto;">x</code> from every <strong style="user-select: auto;">positive</strong> element in <code style="user-select: auto;">nums</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum</strong> number of operations to make every element in </em><code style="user-select: auto;">nums</code><em style="user-select: auto;"> equal to </em><code style="user-select: auto;">0</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,5,0,3,5]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong>
In the first operation, choose x = 1. Now, nums = [0,4,0,2,4].
In the second operation, choose x = 2. Now, nums = [0,2,0,0,2].
In the third operation, choose x = 2. Now, nums = [0,0,0,0,0].
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [0]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> Each element in nums is already 0 so no operations are needed.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 100</code></li>
</ul>
</div>