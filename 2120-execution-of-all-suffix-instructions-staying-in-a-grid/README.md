<h2><a href="https://leetcode.com/problems/execution-of-all-suffix-instructions-staying-in-a-grid/">2120. Execution of All Suffix Instructions Staying in a Grid</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is an <code style="user-select: auto;">n x n</code> grid, with the top-left cell at <code style="user-select: auto;">(0, 0)</code> and the bottom-right cell at <code style="user-select: auto;">(n - 1, n - 1)</code>. You are given the integer <code style="user-select: auto;">n</code> and an integer array <code style="user-select: auto;">startPos</code> where <code style="user-select: auto;">startPos = [start<sub style="user-select: auto;">row</sub>, start<sub style="user-select: auto;">col</sub>]</code> indicates that a robot is initially at cell <code style="user-select: auto;">(start<sub style="user-select: auto;">row</sub>, start<sub style="user-select: auto;">col</sub>)</code>.</p>

<p style="user-select: auto;">You are also given a <strong style="user-select: auto;">0-indexed</strong> string <code style="user-select: auto;">s</code> of length <code style="user-select: auto;">m</code> where <code style="user-select: auto;">s[i]</code> is the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> instruction for the robot: <code style="user-select: auto;">'L'</code> (move left), <code style="user-select: auto;">'R'</code> (move right), <code style="user-select: auto;">'U'</code> (move up), and <code style="user-select: auto;">'D'</code> (move down).</p>

<p style="user-select: auto;">The robot can begin executing from any <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> instruction in <code style="user-select: auto;">s</code>. It executes the instructions one by one towards the end of <code style="user-select: auto;">s</code> but it stops if either of these conditions is met:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The next instruction will move the robot off the grid.</li>
	<li style="user-select: auto;">There are no more instructions left to execute.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">an array</em> <code style="user-select: auto;">answer</code> <em style="user-select: auto;">of length</em> <code style="user-select: auto;">m</code> <em style="user-select: auto;">where</em> <code style="user-select: auto;">answer[i]</code> <em style="user-select: auto;">is <strong style="user-select: auto;">the number of instructions</strong> the robot can execute if the robot <strong style="user-select: auto;">begins executing from</strong> the</em> <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> <em style="user-select: auto;">instruction in</em> <code style="user-select: auto;">s</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/09/1.png" style="width: 145px; height: 142px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 3, startPos = [0,1], s = "RRDDLU"
<strong style="user-select: auto;">Output:</strong> [1,5,4,3,1,0]
<strong style="user-select: auto;">Explanation:</strong> Starting from startPos and beginning execution from the i<sup style="user-select: auto;">th</sup> instruction:
- 0<sup style="user-select: auto;">th</sup>: "<u style="user-select: auto;"><strong style="user-select: auto;">R</strong></u>RDDLU". Only one instruction "R" can be executed before it moves off the grid.
- 1<sup style="user-select: auto;">st</sup>:  "<u style="user-select: auto;"><strong style="user-select: auto;">RDDLU</strong></u>". All five instructions can be executed while it stays in the grid and ends at (1, 1).
- 2<sup style="user-select: auto;">nd</sup>:   "<u style="user-select: auto;"><strong style="user-select: auto;">DDLU</strong></u>". All four instructions can be executed while it stays in the grid and ends at (1, 0).
- 3<sup style="user-select: auto;">rd</sup>:    "<u style="user-select: auto;"><strong style="user-select: auto;">DLU</strong></u>". All three instructions can be executed while it stays in the grid and ends at (0, 0).
- 4<sup style="user-select: auto;">th</sup>:     "<u style="user-select: auto;"><strong style="user-select: auto;">L</strong></u>U". Only one instruction "L" can be executed before it moves off the grid.
- 5<sup style="user-select: auto;">th</sup>:      "U". If moving up, it would move off the grid.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/09/2.png" style="width: 106px; height: 103px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2, startPos = [1,1], s = "LURD"
<strong style="user-select: auto;">Output:</strong> [4,1,0,0]
<strong style="user-select: auto;">Explanation:</strong>
- 0<sup style="user-select: auto;">th</sup>: "<u style="user-select: auto;"><strong style="user-select: auto;">LURD</strong></u>".
- 1<sup style="user-select: auto;">st</sup>:  "<u style="user-select: auto;"><strong style="user-select: auto;">U</strong></u>RD".
- 2<sup style="user-select: auto;">nd</sup>:   "RD".
- 3<sup style="user-select: auto;">rd</sup>:    "D".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/09/3.png" style="width: 67px; height: 64px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 1, startPos = [0,0], s = "LRUD"
<strong style="user-select: auto;">Output:</strong> [0,0,0,0]
<strong style="user-select: auto;">Explanation:</strong> No matter which instruction the robot begins execution from, it would move off the grid.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == s.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n, m &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">startPos.length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= start<sub style="user-select: auto;">row</sub>, start<sub style="user-select: auto;">col</sub> &lt; n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of <code style="user-select: auto;">'L'</code>, <code style="user-select: auto;">'R'</code>, <code style="user-select: auto;">'U'</code>, and <code style="user-select: auto;">'D'</code>.</li>
</ul>
</div>