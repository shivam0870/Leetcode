<h2><a href="https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/">1489. Find Critical and Pseudo-Critical Edges in Minimum Spanning Tree</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a weighted undirected connected graph with <code style="user-select: auto;">n</code>&nbsp;vertices numbered from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code>,&nbsp;and an array <code style="user-select: auto;">edges</code>&nbsp;where <code style="user-select: auto;">edges[i] = [a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub>, weight<sub style="user-select: auto;">i</sub>]</code> represents a bidirectional and weighted edge between nodes&nbsp;<code style="user-select: auto;">a<sub style="user-select: auto;">i</sub></code>&nbsp;and <code style="user-select: auto;">b<sub style="user-select: auto;">i</sub></code>. A minimum spanning tree (MST) is a subset of the graph's edges that connects all vertices without cycles&nbsp;and with the minimum possible total edge weight.</p>

<p style="user-select: auto;">Find <em style="user-select: auto;">all the critical and pseudo-critical edges in the given graph's minimum spanning tree (MST)</em>. An MST edge whose deletion from the graph would cause the MST weight to increase is called a&nbsp;<em style="user-select: auto;">critical edge</em>. On&nbsp;the other hand, a pseudo-critical edge is that which can appear in some MSTs but not all.</p>

<p style="user-select: auto;">Note that you can return the indices of the edges in any order.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<p style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2020/06/04/ex1.png" style="width: 259px; height: 262px; user-select: auto;"></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 5, edges = [[0,1,1],[1,2,1],[2,3,2],[0,3,2],[0,4,3],[3,4,3],[1,4,6]]
<strong style="user-select: auto;">Output:</strong> [[0,1],[2,3,4,5]]
<strong style="user-select: auto;">Explanation:</strong> The figure above describes the graph.
The following figure shows all the possible MSTs:
<img alt="" src="https://assets.leetcode.com/uploads/2020/06/04/msts.png" style="width: 540px; height: 553px; user-select: auto;">
Notice that the two edges 0 and 1 appear in all MSTs, therefore they are critical edges, so we return them in the first list of the output.
The edges 2, 3, 4, and 5 are only part of some MSTs, therefore they are considered pseudo-critical edges. We add them to the second list of the output.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<p style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2020/06/04/ex2.png" style="width: 247px; height: 253px; user-select: auto;"></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4, edges = [[0,1,1],[1,2,1],[2,3,1],[0,3,1]]
<strong style="user-select: auto;">Output:</strong> [[],[0,1,2,3]]
<strong style="user-select: auto;">Explanation:</strong> We can observe that since all 4 edges have equal weight, choosing any 3 edges from the given 4 will yield an MST. Therefore all 4 edges are pseudo-critical.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= edges.length &lt;= min(200, n * (n - 1) / 2)</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">edges[i].length == 3</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= a<sub style="user-select: auto;">i</sub> &lt; b<sub style="user-select: auto;">i</sub> &lt; n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= weight<sub style="user-select: auto;">i</sub>&nbsp;&lt;= 1000</code></li>
	<li style="user-select: auto;">All pairs <code style="user-select: auto;">(a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub>)</code> are <strong style="user-select: auto;">distinct</strong>.</li>
</ul>
</div>