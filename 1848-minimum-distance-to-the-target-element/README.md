<h2><a href="https://leetcode.com/problems/minimum-distance-to-the-target-element/">1848. Minimum Distance to the Target Element</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">nums</code> <strong style="user-select: auto;">(0-indexed)</strong> and two integers <code style="user-select: auto;">target</code> and <code style="user-select: auto;">start</code>, find an index <code style="user-select: auto;">i</code> such that <code style="user-select: auto;">nums[i] == target</code> and <code style="user-select: auto;">abs(i - start)</code> is <strong style="user-select: auto;">minimized</strong>. Note that&nbsp;<code style="user-select: auto;">abs(x)</code>&nbsp;is the absolute value of <code style="user-select: auto;">x</code>.</p>

<p style="user-select: auto;">Return <code style="user-select: auto;">abs(i - start)</code>.</p>

<p style="user-select: auto;">It is <strong style="user-select: auto;">guaranteed</strong> that <code style="user-select: auto;">target</code> exists in <code style="user-select: auto;">nums</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3,4,5], target = 5, start = 3
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> nums[4] = 5 is the only value equal to target, so the answer is abs(4 - 3) = 1.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1], target = 1, start = 0
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> nums[0] = 1 is the only value equal to target, so the answer is abs(0 - 0) = 0.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,1,1,1,1,1,1,1,1,1], target = 1, start = 0
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> Every value of nums is 1, but nums[0] minimizes abs(i - start), which is abs(0 - 0) = 0.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= start &lt; nums.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">target</code> is in <code style="user-select: auto;">nums</code>.</li>
</ul>
</div>