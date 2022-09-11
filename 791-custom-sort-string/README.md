<h2><a href="https://leetcode.com/problems/custom-sort-string/">791. Custom Sort String</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two strings order and s. All the characters of <code style="user-select: auto;">order</code> are <strong style="user-select: auto;">unique</strong> and were sorted in some custom order previously.</p>

<p style="user-select: auto;">Permute the characters of <code style="user-select: auto;">s</code> so that they match the order that <code style="user-select: auto;">order</code> was sorted. More specifically, if a character <code style="user-select: auto;">x</code> occurs before a character <code style="user-select: auto;">y</code> in <code style="user-select: auto;">order</code>, then <code style="user-select: auto;">x</code> should occur before <code style="user-select: auto;">y</code> in the permuted string.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">any permutation of </em><code style="user-select: auto;">s</code><em style="user-select: auto;"> that satisfies this property</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> order = "cba", s = "abcd"
<strong style="user-select: auto;">Output:</strong> "cbad"
<strong style="user-select: auto;">Explanation:</strong> 
"a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a". 
Since "d" does not appear in order, it can be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> order = "cbafg", s = "abcd"
<strong style="user-select: auto;">Output:</strong> "cbad"
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= order.length &lt;= 26</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 200</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">order</code> and <code style="user-select: auto;">s</code> consist of lowercase English letters.</li>
	<li style="user-select: auto;">All the characters of <code style="user-select: auto;">order</code> are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>