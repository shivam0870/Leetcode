<h2><a href="https://leetcode.com/problems/greatest-common-divisor-of-strings/">1071. Greatest Common Divisor of Strings</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">For two strings <code style="user-select: auto;">s</code> and <code style="user-select: auto;">t</code>, we say "<code style="user-select: auto;">t</code> divides <code style="user-select: auto;">s</code>" if and only if <code style="user-select: auto;">s = t + ... + t</code> (i.e., <code style="user-select: auto;">t</code> is concatenated with itself one or more times).</p>

<p style="user-select: auto;">Given two strings <code style="user-select: auto;">str1</code> and <code style="user-select: auto;">str2</code>, return <em style="user-select: auto;">the largest string </em><code style="user-select: auto;">x</code><em style="user-select: auto;"> such that </em><code style="user-select: auto;">x</code><em style="user-select: auto;"> divides both </em><code style="user-select: auto;">str1</code><em style="user-select: auto;"> and </em><code style="user-select: auto;">str2</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> str1 = "ABCABC", str2 = "ABC"
<strong style="user-select: auto;">Output:</strong> "ABC"
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> str1 = "ABABAB", str2 = "ABAB"
<strong style="user-select: auto;">Output:</strong> "AB"
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> str1 = "LEET", str2 = "CODE"
<strong style="user-select: auto;">Output:</strong> ""
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= str1.length, str2.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">str1</code> and <code style="user-select: auto;">str2</code> consist of English uppercase letters.</li>
</ul>
</div>