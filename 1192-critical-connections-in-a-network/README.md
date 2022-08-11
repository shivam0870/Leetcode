<h2><a href="https://leetcode.com/problems/critical-connections-in-a-network/">1192. Critical Connections in a Network</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There are <code style="user-select: auto;">n</code> servers numbered from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code> connected by undirected server-to-server <code style="user-select: auto;">connections</code> forming a network where <code style="user-select: auto;">connections[i] = [a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub>]</code> represents a connection between servers <code style="user-select: auto;">a<sub style="user-select: auto;">i</sub></code> and <code style="user-select: auto;">b<sub style="user-select: auto;">i</sub></code>. Any server can reach other servers directly or indirectly through the network.</p>

<p style="user-select: auto;">A <em style="user-select: auto;">critical connection</em> is a connection that, if removed, will make some servers unable to reach some other server.</p>

<p style="user-select: auto;">Return all critical connections in the network in any order.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/09/03/1537_ex1_2.png" style="width: 198px; height: 248px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4, connections = [[0,1],[1,2],[2,0],[1,3]]
<strong style="user-select: auto;">Output:</strong> [[1,3]]
<strong style="user-select: auto;">Explanation:</strong> [[3,1]] is also accepted.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2, connections = [[0,1]]
<strong style="user-select: auto;">Output:</strong> [[0,1]]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n - 1 &lt;= connections.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub> &lt;= n - 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">a<sub style="user-select: auto;">i</sub> != b<sub style="user-select: auto;">i</sub></code></li>
	<li style="user-select: auto;">There are no repeated connections.</li>
</ul>
</div>