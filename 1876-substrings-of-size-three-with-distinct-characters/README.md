<h2><a href="https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/">1876. Substrings of Size Three with Distinct Characters</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A string is <strong style="user-select: auto;">good</strong> if there are no repeated characters.</p>

<p style="user-select: auto;">Given a string <code style="user-select: auto;">s</code>​​​​​, return <em style="user-select: auto;">the number of <strong style="user-select: auto;">good substrings</strong> of length <strong style="user-select: auto;">three </strong>in </em><code style="user-select: auto;">s</code>​​​​​​.</p>

<p style="user-select: auto;">Note that if there are multiple occurrences of the same substring, every occurrence should be counted.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">substring</strong> is a contiguous sequence of characters in a string.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "xyzzaz"
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> There are 4 substrings of size 3: "xyz", "yzz", "zza", and "zaz". 
The only good substring of length 3 is "xyz".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "aababcabc"
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> There are 7 substrings of size 3: "aab", "aba", "bab", "abc", "bca", "cab", and "abc".
The good substrings are "abc", "bca", "cab", and "abc".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code>​​​​​​ consists of lowercase English letters.</li>
</ul>
</div>