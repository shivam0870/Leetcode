<h2><a href="https://leetcode.com/problems/rearrange-array-elements-by-sign/">2149. Rearrange Array Elements by Sign</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">nums</code> of <strong style="user-select: auto;">even</strong> length consisting of an <strong style="user-select: auto;">equal</strong> number of positive and negative integers.</p>

<p style="user-select: auto;">You should <strong style="user-select: auto;">rearrange</strong> the elements of <code style="user-select: auto;">nums</code> such that the modified array follows the given conditions:</p>

<ol style="user-select: auto;">
	<li style="user-select: auto;">Every <strong style="user-select: auto;">consecutive pair</strong> of integers have <strong style="user-select: auto;">opposite signs</strong>.</li>
	<li style="user-select: auto;">For all integers with the same sign, the <strong style="user-select: auto;">order</strong> in which they were present in <code style="user-select: auto;">nums</code> is <strong style="user-select: auto;">preserved</strong>.</li>
	<li style="user-select: auto;">The rearranged array begins with a positive integer.</li>
</ol>

<p style="user-select: auto;">Return <em style="user-select: auto;">the modified array after rearranging the elements to satisfy the aforementioned conditions</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,1,-2,-5,2,-4]
<strong style="user-select: auto;">Output:</strong> [3,-2,1,-5,2,-4]
<strong style="user-select: auto;">Explanation:</strong>
The positive integers in nums are [3,1,2]. The negative integers are [-2,-5,-4].
The only possible way to rearrange them such that they satisfy all conditions is [3,-2,1,-5,2,-4].
Other ways such as [1,-2,2,-5,3,-4], [3,1,2,-2,-5,-4], [-2,3,-5,1,-4,2] are incorrect because they do not satisfy one or more conditions.  
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [-1,1]
<strong style="user-select: auto;">Output:</strong> [1,-1]
<strong style="user-select: auto;">Explanation:</strong>
1 is the only positive integer and -1 the only negative integer in nums.
So nums is rearranged to [1,-1].
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= nums.length &lt;= 2 * 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums.length</code> is <strong style="user-select: auto;">even</strong></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= |nums[i]| &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums</code> consists of <strong style="user-select: auto;">equal</strong> number of positive and negative integers.</li>
</ul>
</div>