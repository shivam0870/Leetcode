<h2><a href="https://leetcode.com/problems/count-prefixes-of-a-given-string/">2255. Count Prefixes of a Given String</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string array <code style="user-select: auto;">words</code> and a string <code style="user-select: auto;">s</code>, where <code style="user-select: auto;">words[i]</code> and <code style="user-select: auto;">s</code> comprise only of <strong style="user-select: auto;">lowercase English letters</strong>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">number of strings</strong> in</em> <code style="user-select: auto;">words</code> <em style="user-select: auto;">that are a <strong style="user-select: auto;">prefix</strong> of</em> <code style="user-select: auto;">s</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">prefix</strong> of a string is a substring that occurs at the beginning of the string. A <b style="user-select: auto;">substring</b> is a contiguous sequence of characters within a string.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["a","b","c","ab","bc","abc"], s = "abc"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong>
The strings in words which are a prefix of s = "abc" are:
"a", "ab", and "abc".
Thus the number of strings in words which are a prefix of s is 3.<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["a","a"], s = "aa"
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:
</strong>Both of the strings are a prefix of s. 
Note that the same string can occur multiple times in words, and it should be counted each time.<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words[i].length, s.length &lt;= 10</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">words[i]</code> and <code style="user-select: auto;">s</code> consist of lowercase English letters <strong style="user-select: auto;">only</strong>.</li>
</ul>
</div>