<h2><a href="https://leetcode.com/problems/di-string-match/">942. DI String Match</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A permutation <code style="user-select: auto;">perm</code> of <code style="user-select: auto;">n + 1</code> integers of all the integers in the range <code style="user-select: auto;">[0, n]</code> can be represented as a string <code style="user-select: auto;">s</code> of length <code style="user-select: auto;">n</code> where:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">s[i] == 'I'</code> if <code style="user-select: auto;">perm[i] &lt; perm[i + 1]</code>, and</li>
	<li style="user-select: auto;"><code style="user-select: auto;">s[i] == 'D'</code> if <code style="user-select: auto;">perm[i] &gt; perm[i + 1]</code>.</li>
</ul>

<p style="user-select: auto;">Given a string <code style="user-select: auto;">s</code>, reconstruct the permutation <code style="user-select: auto;">perm</code> and return it. If there are multiple valid permutations perm, return <strong style="user-select: auto;">any of them</strong>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "IDID"
<strong style="user-select: auto;">Output:</strong> [0,4,1,3,2]
</pre><p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "III"
<strong style="user-select: auto;">Output:</strong> [0,1,2,3]
</pre><p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "DDI"
<strong style="user-select: auto;">Output:</strong> [3,2,0,1]
</pre>
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s[i]</code> is either <code style="user-select: auto;">'I'</code> or <code style="user-select: auto;">'D'</code>.</li>
</ul>
</div>