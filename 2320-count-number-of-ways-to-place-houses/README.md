<h2><a href="https://leetcode.com/problems/count-number-of-ways-to-place-houses/">2320. Count Number of Ways to Place Houses</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is a street with <code style="user-select: auto;">n * 2</code> <strong style="user-select: auto;">plots</strong>, where there are <code style="user-select: auto;">n</code> plots on each side of the street. The plots on each side are numbered from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">n</code>. On each plot, a house can be placed.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the number of ways houses can be placed such that no two houses are adjacent to each other on the same side of the street</em>. Since the answer may be very large, return it <strong style="user-select: auto;">modulo</strong> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">Note that if a house is placed on the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> plot on one side of the street, a house can also be placed on the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> plot on the other side of the street.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 1
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> 
Possible arrangements:
1. All plots are empty.
2. A house is placed on one side of the street.
3. A house is placed on the other side of the street.
4. Two houses are placed, one on each side of the street.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/05/12/arrangements.png" style="width: 500px; height: 500px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2
<strong style="user-select: auto;">Output:</strong> 9
<strong style="user-select: auto;">Explanation:</strong> The 9 possible arrangements are shown in the diagram above.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>