<h2><a href="https://leetcode.com/problems/number-of-laser-beams-in-a-bank/">2125. Number of Laser Beams in a Bank</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Anti-theft security devices are activated inside a bank. You are given a <strong style="user-select: auto;">0-indexed</strong> binary string array <code style="user-select: auto;">bank</code> representing the floor plan of the bank, which is an <code style="user-select: auto;">m x n</code> 2D matrix. <code style="user-select: auto;">bank[i]</code> represents the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> row, consisting of <code style="user-select: auto;">'0'</code>s and <code style="user-select: auto;">'1'</code>s. <code style="user-select: auto;">'0'</code> means the cell is empty, while<code style="user-select: auto;">'1'</code> means the cell has a security device.</p>

<p style="user-select: auto;">There is <strong style="user-select: auto;">one</strong> laser beam between any <strong style="user-select: auto;">two</strong> security devices <strong style="user-select: auto;">if both</strong> conditions are met:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The two devices are located on two <strong style="user-select: auto;">different rows</strong>: <code style="user-select: auto;">r<sub style="user-select: auto;">1</sub></code> and <code style="user-select: auto;">r<sub style="user-select: auto;">2</sub></code>, where <code style="user-select: auto;">r<sub style="user-select: auto;">1</sub> &lt; r<sub style="user-select: auto;">2</sub></code>.</li>
	<li style="user-select: auto;">For <strong style="user-select: auto;">each</strong> row <code style="user-select: auto;">i</code> where <code style="user-select: auto;">r<sub style="user-select: auto;">1</sub> &lt; i &lt; r<sub style="user-select: auto;">2</sub></code>, there are <strong style="user-select: auto;">no security devices</strong> in the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> row.</li>
</ul>

<p style="user-select: auto;">Laser beams are independent, i.e., one beam does not interfere nor join with another.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the total number of laser beams in the bank</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/24/laser1.jpg" style="width: 400px; height: 368px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> bank = ["011001","000000","010100","001000"]
<strong style="user-select: auto;">Output:</strong> 8
<strong style="user-select: auto;">Explanation:</strong> Between each of the following device pairs, there is one beam. In total, there are 8 beams:
 * bank[0][1] -- bank[2][1]
 * bank[0][1] -- bank[2][3]
 * bank[0][2] -- bank[2][1]
 * bank[0][2] -- bank[2][3]
 * bank[0][5] -- bank[2][1]
 * bank[0][5] -- bank[2][3]
 * bank[2][1] -- bank[3][2]
 * bank[2][3] -- bank[3][2]
Note that there is no beam between any device on the 0<sup style="user-select: auto;">th</sup> row with any on the 3<sup style="user-select: auto;">rd</sup> row.
This is because the 2<sup style="user-select: auto;">nd</sup> row contains security devices, which breaks the second condition.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/24/laser2.jpg" style="width: 244px; height: 325px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> bank = ["000","111","000"]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> There does not exist two devices located on two different rows.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == bank.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == bank[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">bank[i][j]</code> is either <code style="user-select: auto;">'0'</code> or <code style="user-select: auto;">'1'</code>.</li>
</ul>
</div>