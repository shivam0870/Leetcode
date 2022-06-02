<h2><a href="https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/">1752. Check if Array Is Sorted and Rotated</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array <code style="user-select: auto;">nums</code>, return <code style="user-select: auto;">true</code><em style="user-select: auto;"> if the array was originally sorted in non-decreasing order, then rotated <strong style="user-select: auto;">some</strong> number of positions (including zero)</em>. Otherwise, return <code style="user-select: auto;">false</code>.</p>

<p style="user-select: auto;">There may be <strong style="user-select: auto;">duplicates</strong> in the original array.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note:</strong> An array <code style="user-select: auto;">A</code> rotated by <code style="user-select: auto;">x</code> positions results in an array <code style="user-select: auto;">B</code> of the same length such that <code style="user-select: auto;">A[i] == B[(i+x) % A.length]</code>, where <code style="user-select: auto;">%</code> is the modulo operation.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,4,5,1,2]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,1,3,4]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> There is no sorted array once rotated that can make nums.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> [1,2,3] is the original sorted array.
You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 100</code></li>
</ul>
</div>