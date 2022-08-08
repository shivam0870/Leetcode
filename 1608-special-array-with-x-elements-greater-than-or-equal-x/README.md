<h2><a href="https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/">1608. Special Array With X Elements Greater Than or Equal X</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array <code style="user-select: auto;">nums</code> of non-negative integers. <code style="user-select: auto;">nums</code> is considered <strong style="user-select: auto;">special</strong> if there exists a number <code style="user-select: auto;">x</code> such that there are <strong style="user-select: auto;">exactly</strong> <code style="user-select: auto;">x</code> numbers in <code style="user-select: auto;">nums</code> that are <strong style="user-select: auto;">greater than or equal to</strong> <code style="user-select: auto;">x</code>.</p>

<p style="user-select: auto;">Notice that <code style="user-select: auto;">x</code> <strong style="user-select: auto;">does not</strong> have to be an element in <code style="user-select: auto;">nums</code>.</p>

<p style="user-select: auto;">Return <code style="user-select: auto;">x</code> <em style="user-select: auto;">if the array is <strong style="user-select: auto;">special</strong>, otherwise, return </em><code style="user-select: auto;">-1</code>. It can be proven that if <code style="user-select: auto;">nums</code> is special, the value for <code style="user-select: auto;">x</code> is <strong style="user-select: auto;">unique</strong>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,5]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> There are 2 values (3 and 5) that are greater than or equal to 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [0,0]
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> No numbers fit the criteria for x.
If x = 0, there should be 0 numbers &gt;= x, but there are 2.
If x = 1, there should be 1 number &gt;= x, but there are 0.
If x = 2, there should be 2 numbers &gt;= x, but there are 0.
x cannot be greater since there are only 2 numbers in nums.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [0,4,3,0,4]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> There are 3 values that are greater than or equal to 3.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 1000</code></li>
</ul>
</div>