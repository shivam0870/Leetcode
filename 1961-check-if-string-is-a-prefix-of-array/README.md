<h2><a href="https://leetcode.com/problems/check-if-string-is-a-prefix-of-array/">1961. Check If String Is a Prefix of Array</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a string <code style="user-select: auto;">s</code> and an array of strings <code style="user-select: auto;">words</code>, determine whether <code style="user-select: auto;">s</code> is a <strong style="user-select: auto;">prefix string</strong> of <code style="user-select: auto;">words</code>.</p>

<p style="user-select: auto;">A string <code style="user-select: auto;">s</code> is a <strong style="user-select: auto;">prefix string</strong> of <code style="user-select: auto;">words</code> if <code style="user-select: auto;">s</code> can be made by concatenating the first <code style="user-select: auto;">k</code> strings in <code style="user-select: auto;">words</code> for some <strong style="user-select: auto;">positive</strong> <code style="user-select: auto;">k</code> no larger than <code style="user-select: auto;">words.length</code>.</p>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code><em style="user-select: auto;"> if </em><code style="user-select: auto;">s</code><em style="user-select: auto;"> is a <strong style="user-select: auto;">prefix string</strong> of </em><code style="user-select: auto;">words</code><em style="user-select: auto;">, or </em><code style="user-select: auto;">false</code><em style="user-select: auto;"> otherwise</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "iloveleetcode", words = ["i","love","leetcode","apples"]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong>
s can be made by concatenating "i", "love", and "leetcode" together.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "iloveleetcode", words = ["apples","i","love","leetcode"]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong>
It is impossible to make s using a prefix of arr.</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words[i].length &lt;= 20</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">words[i]</code> and <code style="user-select: auto;">s</code> consist of only lowercase English letters.</li>
</ul>
</div>