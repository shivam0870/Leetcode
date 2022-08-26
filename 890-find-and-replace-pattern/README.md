<h2><a href="https://leetcode.com/problems/find-and-replace-pattern/">890. Find and Replace Pattern</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a list of strings <code style="user-select: auto;">words</code> and a string <code style="user-select: auto;">pattern</code>, return <em style="user-select: auto;">a list of</em> <code style="user-select: auto;">words[i]</code> <em style="user-select: auto;">that match</em> <code style="user-select: auto;">pattern</code>. You may return the answer in <strong style="user-select: auto;">any order</strong>.</p>

<p style="user-select: auto;">A word matches the pattern if there exists a permutation of letters <code style="user-select: auto;">p</code> so that after replacing every letter <code style="user-select: auto;">x</code> in the pattern with <code style="user-select: auto;">p(x)</code>, we get the desired word.</p>

<p style="user-select: auto;">Recall that a permutation of letters is a bijection from letters to letters: every letter maps to another letter, and no two letters map to the same letter.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["abc","deq","mee","aqq","dkd","ccc"], pattern = "abb"
<strong style="user-select: auto;">Output:</strong> ["mee","aqq"]
<strong style="user-select: auto;">Explanation:</strong> "mee" matches the pattern because there is a permutation {a -&gt; m, b -&gt; e, ...}. 
"ccc" does not match the pattern because {a -&gt; c, b -&gt; c, ...} is not a permutation, since a and b map to the same letter.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["a","b","c"], pattern = "a"
<strong style="user-select: auto;">Output:</strong> ["a","b","c"]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= pattern.length &lt;= 20</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words.length &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">words[i].length == pattern.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">pattern</code> and <code style="user-select: auto;">words[i]</code> are lowercase English letters.</li>
</ul>
</div>