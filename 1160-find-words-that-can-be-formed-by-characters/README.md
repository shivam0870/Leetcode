<h2><a href="https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/">1160. Find Words That Can Be Formed by Characters</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of strings <code style="user-select: auto;">words</code> and a string <code style="user-select: auto;">chars</code>.</p>

<p style="user-select: auto;">A string is <strong style="user-select: auto;">good</strong> if it can be formed by characters from chars (each character can only be used once).</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the sum of lengths of all good strings in words</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["cat","bt","hat","tree"], chars = "atach"
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["hello","world","leetcode"], chars = "welldonehoneyr"
<strong style="user-select: auto;">Output:</strong> 10
<strong style="user-select: auto;">Explanation:</strong> The strings that can be formed are "hello" and "world" so the answer is 5 + 5 = 10.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words[i].length, chars.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">words[i]</code> and <code style="user-select: auto;">chars</code> consist of lowercase English letters.</li>
</ul>
</div>