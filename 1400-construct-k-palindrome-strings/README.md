<h2><a href="https://leetcode.com/problems/construct-k-palindrome-strings/">1400. Construct K Palindrome Strings</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a string <code style="user-select: auto;">s</code> and an integer <code style="user-select: auto;">k</code>, return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if you can use all the characters in </em><code style="user-select: auto;">s</code><em style="user-select: auto;"> to construct </em><code style="user-select: auto;">k</code><em style="user-select: auto;"> palindrome strings or </em><code style="user-select: auto;">false</code><em style="user-select: auto;"> otherwise</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "annabelle", k = 2
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> You can construct two palindromes using all characters in s.
Some possible constructions "anna" + "elble", "anbna" + "elle", "anellena" + "b"
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "leetcode", k = 3
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> It is impossible to construct 3 palindromes using all the characters of s.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "true", k = 4
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> The only possible solution is to put each character in a separate string.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of lowercase English letters.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>