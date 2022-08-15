<h2><a href="https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram-ii/">2186. Minimum Number of Steps to Make Two Strings Anagram II</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two strings <code style="user-select: auto;">s</code> and <code style="user-select: auto;">t</code>. In one step, you can append <strong style="user-select: auto;">any character</strong> to either <code style="user-select: auto;">s</code> or <code style="user-select: auto;">t</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of steps to make </em><code style="user-select: auto;">s</code><em style="user-select: auto;"> and </em><code style="user-select: auto;">t</code><em style="user-select: auto;"> <strong style="user-select: auto;">anagrams</strong> of each other.</em></p>

<p style="user-select: auto;">An <strong style="user-select: auto;">anagram</strong> of a string is a string that contains the same characters with a different (or the same) ordering.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "<strong style="user-select: auto;"><u style="user-select: auto;">lee</u></strong>tco<u style="user-select: auto;"><strong style="user-select: auto;">de</strong></u>", t = "co<u style="user-select: auto;"><strong style="user-select: auto;">a</strong></u>t<u style="user-select: auto;"><strong style="user-select: auto;">s</strong></u>"
<strong style="user-select: auto;">Output:</strong> 7
<strong style="user-select: auto;">Explanation:</strong> 
- In 2 steps, we can append the letters in "as" onto s = "leetcode", forming s = "leetcode<strong style="user-select: auto;"><u style="user-select: auto;">as</u></strong>".
- In 5 steps, we can append the letters in "leede" onto t = "coats", forming t = "coats<u style="user-select: auto;"><strong style="user-select: auto;">leede</strong></u>".
"leetcodeas" and "coatsleede" are now anagrams of each other.
We used a total of 2 + 5 = 7 steps.
It can be shown that there is no way to make them anagrams of each other with less than 7 steps.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "night", t = "thing"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> The given strings are already anagrams of each other. Thus, we do not need any further steps.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length, t.length &lt;= 2 * 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> and <code style="user-select: auto;">t</code> consist of lowercase English letters.</li>
</ul>
</div>