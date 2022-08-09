<h2><a href="https://leetcode.com/problems/spiral-matrix-iv/">2326. Spiral Matrix IV</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two integers <code style="user-select: auto;">m</code> and <code style="user-select: auto;">n</code>, which represent the dimensions of a matrix.</p>

<p style="user-select: auto;">You are also given the <code style="user-select: auto;">head</code> of a linked list of integers.</p>

<p style="user-select: auto;">Generate an <code style="user-select: auto;">m x n</code> matrix that contains the integers in the linked list presented in <strong style="user-select: auto;">spiral</strong> order <strong style="user-select: auto;">(clockwise)</strong>, starting from the <strong style="user-select: auto;">top-left</strong> of the matrix. If there are remaining empty spaces, fill them with <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the generated matrix</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/05/09/ex1new.jpg" style="width: 240px; height: 150px; user-select: auto;">
<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> m = 3, n = 5, head = [3,0,2,6,8,1,7,9,4,2,5,5,0]
<strong style="user-select: auto;">Output:</strong> [[3,0,2,6,8],[5,0,-1,-1,1],[5,2,4,9,7]]
<strong style="user-select: auto;">Explanation:</strong> The diagram above shows how the values are printed in the matrix.
Note that the remaining spaces in the matrix are filled with -1.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/05/11/ex2.jpg" style="width: 221px; height: 60px; user-select: auto;">
<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> m = 1, n = 4, head = [0,1,2]
<strong style="user-select: auto;">Output:</strong> [[0,1,2,-1]]
<strong style="user-select: auto;">Explanation:</strong> The diagram above shows how the values are printed from left to right in the matrix.
The last space in the matrix is set to -1.<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m * n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;">The number of nodes in the list is in the range <code style="user-select: auto;">[1, m * n]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= Node.val &lt;= 1000</code></li>
</ul>
</div>