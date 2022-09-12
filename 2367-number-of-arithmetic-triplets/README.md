<h2><a href="https://leetcode.com/problems/number-of-arithmetic-triplets/">2367. Number of Arithmetic Triplets</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong>, <strong style="user-select: auto;">strictly increasing</strong> integer array <code style="user-select: auto;">nums</code> and a positive integer <code style="user-select: auto;">diff</code>. A triplet <code style="user-select: auto;">(i, j, k)</code> is an <strong style="user-select: auto;">arithmetic triplet</strong> if the following conditions are met:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">i &lt; j &lt; k</code>,</li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums[j] - nums[i] == diff</code>, and</li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums[k] - nums[j] == diff</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the number of unique <strong style="user-select: auto;">arithmetic triplets</strong>.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [0,1,4,6,7,10], diff = 3
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
(1, 2, 4) is an arithmetic triplet because both 7 - 4 == 3 and 4 - 1 == 3.
(2, 4, 5) is an arithmetic triplet because both 10 - 7 == 3 and 7 - 4 == 3. 
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [4,5,6,7,8,9], diff = 2
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
(0, 2, 4) is an arithmetic triplet because both 8 - 6 == 2 and 6 - 4 == 2.
(1, 3, 5) is an arithmetic triplet because both 9 - 7 == 2 and 7 - 5 == 2.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= nums.length &lt;= 200</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 200</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= diff &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums</code> is <strong style="user-select: auto;">strictly</strong> increasing.</li>
</ul>
</div>