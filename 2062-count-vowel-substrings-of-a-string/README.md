<h2><a href="https://leetcode.com/problems/count-vowel-substrings-of-a-string/">2062. Count Vowel Substrings of a String</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A <strong style="user-select: auto;">substring</strong> is a contiguous (non-empty) sequence of characters within a string.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">vowel substring</strong> is a substring that <strong style="user-select: auto;">only</strong> consists of vowels (<code style="user-select: auto;">'a'</code>, <code style="user-select: auto;">'e'</code>, <code style="user-select: auto;">'i'</code>, <code style="user-select: auto;">'o'</code>, and <code style="user-select: auto;">'u'</code>) and has <strong style="user-select: auto;">all five</strong> vowels present in it.</p>

<p style="user-select: auto;">Given a string <code style="user-select: auto;">word</code>, return <em style="user-select: auto;">the number of <strong style="user-select: auto;">vowel substrings</strong> in</em> <code style="user-select: auto;">word</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> word = "aeiouu"
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The vowel substrings of word are as follows (underlined):
- "<strong style="user-select: auto;"><u style="user-select: auto;">aeiou</u></strong>u"
- "<strong style="user-select: auto;"><u style="user-select: auto;">aeiouu</u></strong>"
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> word = "unicornarihan"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> Not all 5 vowels are present, so there are no vowel substrings.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> word = "cuaieuouac"
<strong style="user-select: auto;">Output:</strong> 7
<strong style="user-select: auto;">Explanation:</strong> The vowel substrings of word are as follows (underlined):
- "c<strong style="user-select: auto;"><u style="user-select: auto;">uaieuo</u></strong>uac"
- "c<strong style="user-select: auto;"><u style="user-select: auto;">uaieuou</u></strong>ac"
- "c<strong style="user-select: auto;"><u style="user-select: auto;">uaieuoua</u></strong>c"
- "cu<strong style="user-select: auto;"><u style="user-select: auto;">aieuo</u></strong>uac"
- "cu<strong style="user-select: auto;"><u style="user-select: auto;">aieuou</u></strong>ac"
- "cu<strong style="user-select: auto;"><u style="user-select: auto;">aieuoua</u></strong>c"
- "cua<strong style="user-select: auto;"><u style="user-select: auto;">ieuoua</u></strong>c"
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= word.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">word</code> consists of lowercase English letters only.</li>
</ul>
</div>