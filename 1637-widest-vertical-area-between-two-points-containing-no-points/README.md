<h2><a href="https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/">1637. Widest Vertical Area Between Two Points Containing No Points</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given <code style="user-select: auto;">n</code> <code style="user-select: auto;">points</code> on a 2D plane where <code style="user-select: auto;">points[i] = [x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub>]</code>, Return<em style="user-select: auto;">&nbsp;the <strong style="user-select: auto;">widest vertical area</strong> between two points such that no points are inside the area.</em></p>

<p style="user-select: auto;">A <strong style="user-select: auto;">vertical area</strong> is an area of fixed-width extending infinitely along the y-axis (i.e., infinite height). The <strong style="user-select: auto;">widest vertical area</strong> is the one with the maximum width.</p>

<p style="user-select: auto;">Note that points <strong style="user-select: auto;">on the edge</strong> of a vertical area <strong style="user-select: auto;">are not</strong> considered included in the area.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/19/points3.png" style="width: 276px; height: 371px; user-select: auto;">​
<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> points = [[8,7],[9,9],[7,4],[9,7]]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> Both the red and the blue area are optimal.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> points = [[3,1],[9,0],[1,0],[1,4],[5,3],[8,8]]
<strong style="user-select: auto;">Output:</strong> 3
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == points.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">points[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub>&nbsp;&lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>