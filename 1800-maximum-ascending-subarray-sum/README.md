<h2><a href="https://leetcode.com/problems/maximum-ascending-subarray-sum/">1800. Maximum Ascending Subarray Sum</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of positive integers <code style="user-select: auto;">nums</code>, return the <em style="user-select: auto;">maximum possible sum of an <strong style="user-select: auto;">ascending</strong> subarray in </em><code style="user-select: auto;">nums</code>.</p>

<p style="user-select: auto;">A subarray is defined as a contiguous sequence of numbers in an array.</p>

<p style="user-select: auto;">A subarray <code style="user-select: auto;">[nums<sub style="user-select: auto;">l</sub>, nums<sub style="user-select: auto;">l+1</sub>, ..., nums<sub style="user-select: auto;">r-1</sub>, nums<sub style="user-select: auto;">r</sub>]</code> is <strong style="user-select: auto;">ascending</strong> if for all <code style="user-select: auto;">i</code> where <code style="user-select: auto;">l &lt;= i &lt; r</code>, <code style="user-select: auto;">nums<sub style="user-select: auto;">i </sub> &lt; nums<sub style="user-select: auto;">i+1</sub></code>. Note that a subarray of size <code style="user-select: auto;">1</code> is <strong style="user-select: auto;">ascending</strong>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [10,20,30,5,10,50]
<strong style="user-select: auto;">Output:</strong> 65
<strong style="user-select: auto;">Explanation: </strong>[5,10,50] is the ascending subarray with the maximum sum of 65.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [10,20,30,40,50]
<strong style="user-select: auto;">Output:</strong> 150
<strong style="user-select: auto;">Explanation: </strong>[10,20,30,40,50] is the ascending subarray with the maximum sum of 150.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [12,17,15,13,10,11,12]
<strong style="user-select: auto;">Output:</strong> 33
<strong style="user-select: auto;">Explanation: </strong>[10,11,12] is the ascending subarray with the maximum sum of 33.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 100</code></li>
</ul>
</div>