<h2><a href="https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/">1347. Minimum Number of Steps to Make Two Strings Anagram</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two strings of the same length <code style="user-select: auto;">s</code> and <code style="user-select: auto;">t</code>. In one step you can choose <strong style="user-select: auto;">any character</strong> of <code style="user-select: auto;">t</code> and replace it with <strong style="user-select: auto;">another character</strong>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of steps</em> to make <code style="user-select: auto;">t</code> an anagram of <code style="user-select: auto;">s</code>.</p>

<p style="user-select: auto;">An <strong style="user-select: auto;">Anagram</strong> of a string is a string that contains the same characters with a different (or the same) ordering.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "bab", t = "aba"
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> Replace the first 'a' in t with b, t = "bba" which is anagram of s.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "leetcode", t = "practice"
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> Replace 'p', 'r', 'a', 'i' and 'c' from t with proper characters to make t anagram of s.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "anagram", t = "mangaar"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> "anagram" and "mangaar" are anagrams. 
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s.length == t.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> and <code style="user-select: auto;">t</code> consist of lowercase English letters only.</li>
</ul>
</div>