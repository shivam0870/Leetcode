<h2><a href="https://leetcode.com/problems/maximum-score-after-splitting-a-string/">1422. Maximum Score After Splitting a String</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a&nbsp;string <code style="user-select: auto;">s</code>&nbsp;of zeros and ones, <em style="user-select: auto;">return the maximum score after splitting the string into two <strong style="user-select: auto;">non-empty</strong> substrings</em> (i.e. <strong style="user-select: auto;">left</strong> substring and <strong style="user-select: auto;">right</strong> substring).</p>

<p style="user-select: auto;">The score after splitting a string is the number of <strong style="user-select: auto;">zeros</strong> in the <strong style="user-select: auto;">left</strong> substring plus the number of <strong style="user-select: auto;">ones</strong> in the <strong style="user-select: auto;">right</strong> substring.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "011101"
<strong style="user-select: auto;">Output:</strong> 5 
<strong style="user-select: auto;">Explanation:</strong> 
All possible ways of splitting s into two non-empty substrings are:
left = "0" and right = "11101", score = 1 + 4 = 5 
left = "01" and right = "1101", score = 1 + 3 = 4 
left = "011" and right = "101", score = 1 + 2 = 3 
left = "0111" and right = "01", score = 1 + 1 = 2 
left = "01110" and right = "1", score = 2 + 1 = 3
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "00111"
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> When left = "00" and right = "111", we get the maximum score = 2 + 3 = 5
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "1111"
<strong style="user-select: auto;">Output:</strong> 3
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= s.length &lt;= 500</code></li>
	<li style="user-select: auto;">The string <code style="user-select: auto;">s</code> consists of characters <code style="user-select: auto;">'0'</code> and <code style="user-select: auto;">'1'</code> only.</li>
</ul>
</div>