<h2><a href="https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/">1877. Minimize Maximum Pair Sum in Array</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">The <strong style="user-select: auto;">pair sum</strong> of a pair <code style="user-select: auto;">(a,b)</code> is equal to <code style="user-select: auto;">a + b</code>. The <strong style="user-select: auto;">maximum pair sum</strong> is the largest <strong style="user-select: auto;">pair sum</strong> in a list of pairs.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, if we have pairs <code style="user-select: auto;">(1,5)</code>, <code style="user-select: auto;">(2,3)</code>, and <code style="user-select: auto;">(4,4)</code>, the <strong style="user-select: auto;">maximum pair sum</strong> would be <code style="user-select: auto;">max(1+5, 2+3, 4+4) = max(6, 5, 8) = 8</code>.</li>
</ul>

<p style="user-select: auto;">Given an array <code style="user-select: auto;">nums</code> of <strong style="user-select: auto;">even</strong> length <code style="user-select: auto;">n</code>, pair up the elements of <code style="user-select: auto;">nums</code> into <code style="user-select: auto;">n / 2</code> pairs such that:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Each element of <code style="user-select: auto;">nums</code> is in <strong style="user-select: auto;">exactly one</strong> pair, and</li>
	<li style="user-select: auto;">The <strong style="user-select: auto;">maximum pair sum </strong>is <strong style="user-select: auto;">minimized</strong>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimized <strong style="user-select: auto;">maximum pair sum</strong> after optimally pairing up the elements</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,5,2,3]
<strong style="user-select: auto;">Output:</strong> 7
<strong style="user-select: auto;">Explanation:</strong> The elements can be paired up into pairs (3,3) and (5,2).
The maximum pair sum is max(3+3, 5+2) = max(6, 7) = 7.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,5,4,2,4,6]
<strong style="user-select: auto;">Output:</strong> 8
<strong style="user-select: auto;">Explanation:</strong> The elements can be paired up into pairs (3,5), (4,4), and (6,2).
The maximum pair sum is max(3+5, 4+4, 6+2) = max(8, 8, 8) = 8.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == nums.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n</code> is <strong style="user-select: auto;">even</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul></div>