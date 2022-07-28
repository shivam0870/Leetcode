<h2><a href="https://leetcode.com/problems/max-increase-to-keep-city-skyline/">807. Max Increase to Keep City Skyline</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is a city composed of <code style="user-select: auto;">n x n</code> blocks, where each block contains a single building shaped like a vertical square prism. You are given a <strong style="user-select: auto;">0-indexed</strong> <code style="user-select: auto;">n x n</code> integer matrix <code style="user-select: auto;">grid</code> where <code style="user-select: auto;">grid[r][c]</code> represents the <strong style="user-select: auto;">height</strong> of the building located in the block at row <code style="user-select: auto;">r</code> and column <code style="user-select: auto;">c</code>.</p>

<p style="user-select: auto;">A city's <strong style="user-select: auto;">skyline</strong> is the the outer contour formed by all the building when viewing the side of the city from a distance. The <strong style="user-select: auto;">skyline</strong> from each cardinal direction north, east, south, and west may be different.</p>

<p style="user-select: auto;">We are allowed to increase the height of <strong style="user-select: auto;">any number of buildings by any amount</strong> (the amount can be different per building). The height of a <code style="user-select: auto;">0</code>-height building can also be increased. However, increasing the height of a building should <strong style="user-select: auto;">not</strong> affect the city's <strong style="user-select: auto;">skyline</strong> from any cardinal direction.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum total sum</strong> that the height of the buildings can be increased by <strong style="user-select: auto;">without</strong> changing the city's <strong style="user-select: auto;">skyline</strong> from any cardinal direction</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/06/21/807-ex1.png" style="width: 700px; height: 603px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[3,0,8,4],[2,4,5,7],[9,2,6,3],[0,3,1,0]]
<strong style="user-select: auto;">Output:</strong> 35
<strong style="user-select: auto;">Explanation:</strong> The building heights are shown in the center of the above image.
The skylines when viewed from each cardinal direction are drawn in red.
The grid after increasing the height of buildings without affecting skylines is:
gridNew = [ [8, 4, 8, 7],
            [7, 4, 7, 7],
            [9, 4, 8, 7],
            [3, 3, 3, 3] ]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[0,0,0],[0,0,0],[0,0,0]]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> Increasing the height of any building will result in the skyline changing.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid[r].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= grid[r][c] &lt;= 100</code></li>
</ul>
</div>