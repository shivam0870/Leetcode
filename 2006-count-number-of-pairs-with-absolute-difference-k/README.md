<h2><a href="https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/">2006. Count Number of Pairs With Absolute Difference K</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">nums</code> and an integer <code style="user-select: auto;">k</code>, return <em style="user-select: auto;">the number of pairs</em> <code style="user-select: auto;">(i, j)</code> <em style="user-select: auto;">where</em> <code style="user-select: auto;">i &lt; j</code> <em style="user-select: auto;">such that</em> <code style="user-select: auto;">|nums[i] - nums[j]| == k</code>.</p>

<p style="user-select: auto;">The value of <code style="user-select: auto;">|x|</code> is defined as:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">x</code> if <code style="user-select: auto;">x &gt;= 0</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">-x</code> if <code style="user-select: auto;">x &lt; 0</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,2,1], k = 1
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> The pairs with an absolute difference of 1 are:
- [<strong style="user-select: auto;"><u style="user-select: auto;">1</u></strong>,<strong style="user-select: auto;"><u style="user-select: auto;">2</u></strong>,2,1]
- [<strong style="user-select: auto;"><u style="user-select: auto;">1</u></strong>,2,<strong style="user-select: auto;"><u style="user-select: auto;">2</u></strong>,1]
- [1,<strong style="user-select: auto;"><u style="user-select: auto;">2</u></strong>,2,<strong style="user-select: auto;"><u style="user-select: auto;">1</u></strong>]
- [1,2,<strong style="user-select: auto;"><u style="user-select: auto;">2</u></strong>,<strong style="user-select: auto;"><u style="user-select: auto;">1</u></strong>]
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,3], k = 3
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> There are no pairs with an absolute difference of 3.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,2,1,5,4], k = 2
<strong style="user-select: auto;">Output:</strong> 3
<b style="user-select: auto;">Explanation:</b> The pairs with an absolute difference of 2 are:
- [<strong style="user-select: auto;"><u style="user-select: auto;">3</u></strong>,2,<strong style="user-select: auto;"><u style="user-select: auto;">1</u></strong>,5,4]
- [<strong style="user-select: auto;"><u style="user-select: auto;">3</u></strong>,2,1,<strong style="user-select: auto;"><u style="user-select: auto;">5</u></strong>,4]
- [3,<strong style="user-select: auto;"><u style="user-select: auto;">2</u></strong>,1,5,<strong style="user-select: auto;"><u style="user-select: auto;">4</u></strong>]
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 200</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= 99</code></li>
</ul>
</div>