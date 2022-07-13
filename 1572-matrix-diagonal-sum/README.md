<h2><a href="https://leetcode.com/problems/matrix-diagonal-sum/">1572. Matrix Diagonal Sum</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a&nbsp;square&nbsp;matrix&nbsp;<code style="user-select: auto;">mat</code>, return the sum of the matrix diagonals.</p>

<p style="user-select: auto;">Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/14/sample_1911.png" style="width: 336px; height: 174px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> mat = [[<strong style="user-select: auto;">1</strong>,2,<strong style="user-select: auto;">3</strong>],
&nbsp;             [4,<strong style="user-select: auto;">5</strong>,6],
&nbsp;             [<strong style="user-select: auto;">7</strong>,8,<strong style="user-select: auto;">9</strong>]]
<strong style="user-select: auto;">Output:</strong> 25
<strong style="user-select: auto;">Explanation: </strong>Diagonals sum: 1 + 5 + 9 + 3 + 7 = 25
Notice that element mat[1][1] = 5 is counted only once.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> mat = [[<strong style="user-select: auto;">1</strong>,1,1,<strong style="user-select: auto;">1</strong>],
&nbsp;             [1,<strong style="user-select: auto;">1</strong>,<strong style="user-select: auto;">1</strong>,1],
&nbsp;             [1,<strong style="user-select: auto;">1</strong>,<strong style="user-select: auto;">1</strong>,1],
&nbsp;             [<strong style="user-select: auto;">1</strong>,1,1,<strong style="user-select: auto;">1</strong>]]
<strong style="user-select: auto;">Output:</strong> 8
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> mat = [[<strong style="user-select: auto;">5</strong>]]
<strong style="user-select: auto;">Output:</strong> 5
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == mat.length == mat[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= mat[i][j] &lt;= 100</code></li>
</ul>
</div>