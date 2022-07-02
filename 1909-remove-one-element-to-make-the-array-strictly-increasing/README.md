<h2><a href="https://leetcode.com/problems/remove-one-element-to-make-the-array-strictly-increasing/">1909. Remove One Element to Make the Array Strictly Increasing</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">nums</code>, return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if it can be made <strong style="user-select: auto;">strictly increasing</strong> after removing <strong style="user-select: auto;">exactly one</strong> element, or </em><code style="user-select: auto;">false</code><em style="user-select: auto;"> otherwise. If the array is already strictly increasing, return </em><code style="user-select: auto;">true</code>.</p>

<p style="user-select: auto;">The array <code style="user-select: auto;">nums</code> is <strong style="user-select: auto;">strictly increasing</strong> if <code style="user-select: auto;">nums[i - 1] &lt; nums[i]</code> for each index <code style="user-select: auto;">(1 &lt;= i &lt; nums.length).</code></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,<u style="user-select: auto;">10</u>,5,7]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> By removing 10 at index 2 from nums, it becomes [1,2,5,7].
[1,2,5,7] is strictly increasing, so return true.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,3,1,2]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong>
[3,1,2] is the result of removing the element at index 0.
[2,1,2] is the result of removing the element at index 1.
[2,3,2] is the result of removing the element at index 2.
[2,3,1] is the result of removing the element at index 3.
No resulting array is strictly increasing, so return false.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,1,1]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> The result of removing any element is [1,1].
[1,1] is not strictly increasing, so return false.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= nums.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 1000</code></li>
</ul>
</div>