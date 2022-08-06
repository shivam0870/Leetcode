<h2><a href="https://leetcode.com/problems/string-matching-in-an-array/">1408. String Matching in an Array</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of string <code style="user-select: auto;">words</code>. Return all strings in <code style="user-select: auto;">words</code> which is substring of another word in <strong style="user-select: auto;">any</strong> order.&nbsp;</p>

<p style="user-select: auto;">String <code style="user-select: auto;">words[i]</code> is substring of <code style="user-select: auto;">words[j]</code>,&nbsp;if&nbsp;can be obtained removing some characters to left and/or right side of <code style="user-select: auto;">words[j]</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["mass","as","hero","superhero"]
<strong style="user-select: auto;">Output:</strong> ["as","hero"]
<strong style="user-select: auto;">Explanation:</strong> "as" is substring of "mass" and "hero" is substring of "superhero".
["hero","as"] is also a valid answer.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["leetcode","et","code"]
<strong style="user-select: auto;">Output:</strong> ["et","code"]
<strong style="user-select: auto;">Explanation:</strong> "et", "code" are substring of "leetcode".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["blue","green","bu"]
<strong style="user-select: auto;">Output:</strong> []
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words[i].length &lt;= 30</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">words[i]</code> contains only lowercase English letters.</li>
	<li style="user-select: auto;">It's <strong style="user-select: auto;">guaranteed</strong>&nbsp;that <code style="user-select: auto;">words[i]</code>&nbsp;will be unique.</li>
</ul>
</div>