<h2><a href="https://leetcode.com/problems/the-k-strongest-values-in-an-array/">1471. The k Strongest Values in an Array</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of integers <code style="user-select: auto;">arr</code> and an integer <code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">A value <code style="user-select: auto;">arr[i]</code> is said to be stronger than a value <code style="user-select: auto;">arr[j]</code> if <code style="user-select: auto;">|arr[i] - m| &gt; |arr[j] - m|</code> where <code style="user-select: auto;">m</code> is the <strong style="user-select: auto;">median</strong> of the array.<br style="user-select: auto;">
If <code style="user-select: auto;">|arr[i] - m| == |arr[j] - m|</code>, then <code style="user-select: auto;">arr[i]</code> is said to be stronger than <code style="user-select: auto;">arr[j]</code> if <code style="user-select: auto;">arr[i] &gt; arr[j]</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">a list of the strongest <code style="user-select: auto;">k</code></em> values in the array. return the answer <strong style="user-select: auto;">in any arbitrary order</strong>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Median</strong> is the middle value in an ordered integer list. More formally, if the length of the list is n, the median is the element in position <code style="user-select: auto;">((n - 1) / 2)</code> in the sorted list <strong style="user-select: auto;">(0-indexed)</strong>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For <code style="user-select: auto;">arr = [6, -3, 7, 2, 11]</code>, <code style="user-select: auto;">n = 5</code> and the median is obtained by sorting the array <code style="user-select: auto;">arr = [-3, 2, 6, 7, 11]</code> and the median is <code style="user-select: auto;">arr[m]</code> where <code style="user-select: auto;">m = ((5 - 1) / 2) = 2</code>. The median is <code style="user-select: auto;">6</code>.</li>
	<li style="user-select: auto;">For <code style="user-select: auto;">arr = [-7, 22, 17, 3]</code>, <code style="user-select: auto;">n = 4</code> and the median is obtained by sorting the array <code style="user-select: auto;">arr = [-7, 3, 17, 22]</code> and the median is <code style="user-select: auto;">arr[m]</code> where <code style="user-select: auto;">m = ((4 - 1) / 2) = 1</code>. The median is <code style="user-select: auto;">3</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [1,2,3,4,5], k = 2
<strong style="user-select: auto;">Output:</strong> [5,1]
<strong style="user-select: auto;">Explanation:</strong> Median is 3, the elements of the array sorted by the strongest are [5,1,4,2,3]. The strongest 2 elements are [5, 1]. [1, 5] is also <strong style="user-select: auto;">accepted</strong> answer.
Please note that although |5 - 3| == |1 - 3| but 5 is stronger than 1 because 5 &gt; 1.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [1,1,3,5,5], k = 2
<strong style="user-select: auto;">Output:</strong> [5,5]
<strong style="user-select: auto;">Explanation:</strong> Median is 3, the elements of the array sorted by the strongest are [5,5,1,1,3]. The strongest 2 elements are [5, 5].
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [6,7,11,7,6,8], k = 5
<strong style="user-select: auto;">Output:</strong> [11,8,6,6,7]
<strong style="user-select: auto;">Explanation:</strong> Median is 7, the elements of the array sorted by the strongest are [11,8,6,6,7,7].
Any permutation of [11,8,6,6,7] is <strong style="user-select: auto;">accepted</strong>.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">5</sup> &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= arr.length</code></li>
</ul>
</div>