<h2><a href="https://leetcode.com/problems/find-all-k-distant-indices-in-an-array/">2200. Find All K-Distant Indices in an Array</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">nums</code> and two integers <code style="user-select: auto;">key</code> and <code style="user-select: auto;">k</code>. A <strong style="user-select: auto;">k-distant index</strong> is an index <code style="user-select: auto;">i</code> of <code style="user-select: auto;">nums</code> for which there exists at least one index <code style="user-select: auto;">j</code> such that <code style="user-select: auto;">|i - j| &lt;= k</code> and <code style="user-select: auto;">nums[j] == key</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">a list of all k-distant indices sorted in <strong style="user-select: auto;">increasing order</strong></em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,4,9,1,3,9,5], key = 9, k = 1
<strong style="user-select: auto;">Output:</strong> [1,2,3,4,5,6]
<strong style="user-select: auto;">Explanation:</strong> Here, <code style="user-select: auto;">nums[2] == key</code> and <code style="user-select: auto;">nums[5] == key.
- For index 0, |0 - 2| &gt; k and |0 - 5| &gt; k, so there is no j</code> where <code style="user-select: auto;">|0 - j| &lt;= k</code> and <code style="user-select: auto;">nums[j] == key. Thus, 0 is not a k-distant index.
- For index 1, |1 - 2| &lt;= k and nums[2] == key, so 1 is a k-distant index.
- For index 2, |2 - 2| &lt;= k and nums[2] == key, so 2 is a k-distant index.
- For index 3, |3 - 2| &lt;= k and nums[2] == key, so 3 is a k-distant index.
- For index 4, |4 - 5| &lt;= k and nums[5] == key, so 4 is a k-distant index.
- For index 5, |5 - 5| &lt;= k and nums[5] == key, so 5 is a k-distant index.
- For index 6, |6 - 5| &lt;= k and nums[5] == key, so 6 is a k-distant index.
</code>Thus, we return [1,2,3,4,5,6] which is sorted in increasing order. 
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,2,2,2,2], key = 2, k = 2
<strong style="user-select: auto;">Output:</strong> [0,1,2,3,4]
<strong style="user-select: auto;">Explanation:</strong> For all indices i in nums, there exists some index j such that |i - j| &lt;= k and nums[j] == key, so every index is a k-distant index. 
Hence, we return [0,1,2,3,4].
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">key</code> is an integer from the array <code style="user-select: auto;">nums</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= nums.length</code></li>
</ul>
</div>