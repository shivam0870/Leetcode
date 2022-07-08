<h2><a href="https://leetcode.com/problems/mean-of-array-after-removing-some-elements/">1619. Mean of Array After Removing Some Elements</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">arr</code>, return <em style="user-select: auto;">the mean of the remaining integers after removing the smallest <code style="user-select: auto;">5%</code> and the largest <code style="user-select: auto;">5%</code> of the elements.</em></p>

<p style="user-select: auto;">Answers within <code style="user-select: auto;">10<sup style="user-select: auto;">-5</sup></code> of the <strong style="user-select: auto;">actual answer</strong> will be considered accepted.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3]
<strong style="user-select: auto;">Output:</strong> 2.00000
<strong style="user-select: auto;">Explanation:</strong> After erasing the minimum and the maximum values of this array, all elements are equal to 2, so the mean is 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [6,2,7,5,1,2,0,3,10,2,5,0,5,5,0,8,7,6,8,0]
<strong style="user-select: auto;">Output:</strong> 4.00000
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [6,0,7,0,7,5,7,8,3,4,0,7,8,1,6,8,1,1,2,4,8,1,9,5,4,3,8,5,10,8,6,6,1,0,6,10,8,2,3,4]
<strong style="user-select: auto;">Output:</strong> 4.77778
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">20 &lt;= arr.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">arr.length</code><b style="user-select: auto;"> </b><strong style="user-select: auto;">is a multiple</strong> of <code style="user-select: auto;">20</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;"><font face="monospace" style="user-select: auto;">0 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">5</sup></font></code></li>
</ul>
</div>