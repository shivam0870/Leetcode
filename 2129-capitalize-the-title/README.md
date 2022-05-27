<h2><a href="https://leetcode.com/problems/capitalize-the-title/">2129. Capitalize the Title</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">title</code> consisting of one or more words separated by a single space, where each word consists of English letters. <strong style="user-select: auto;">Capitalize</strong> the string by changing the capitalization of each word such that:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">If the length of the word is <code style="user-select: auto;">1</code> or <code style="user-select: auto;">2</code> letters, change all letters to lowercase.</li>
	<li style="user-select: auto;">Otherwise, change the first letter to uppercase and the remaining letters to lowercase.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">capitalized</strong> </em><code style="user-select: auto;">title</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> title = "capiTalIze tHe titLe"
<strong style="user-select: auto;">Output:</strong> "Capitalize The Title"
<strong style="user-select: auto;">Explanation:</strong>
Since all the words have a length of at least 3, the first letter of each word is uppercase, and the remaining letters are lowercase.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> title = "First leTTeR of EACH Word"
<strong style="user-select: auto;">Output:</strong> "First Letter of Each Word"
<strong style="user-select: auto;">Explanation:</strong>
The word "of" has length 2, so it is all lowercase.
The remaining words have a length of at least 3, so the first letter of each remaining word is uppercase, and the remaining letters are lowercase.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> title = "i lOve leetcode"
<strong style="user-select: auto;">Output:</strong> "i Love Leetcode"
<strong style="user-select: auto;">Explanation:</strong>
The word "i" has length 1, so it is lowercase.
The remaining words have a length of at least 3, so the first letter of each remaining word is uppercase, and the remaining letters are lowercase.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= title.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">title</code> consists of words separated by a single space without any leading or trailing spaces.</li>
	<li style="user-select: auto;">Each word consists of uppercase and lowercase English letters and is <strong style="user-select: auto;">non-empty</strong>.</li>
</ul>
</div>