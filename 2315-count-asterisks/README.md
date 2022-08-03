<h2><a href="https://leetcode.com/problems/count-asterisks/">2315. Count Asterisks</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">s</code>, where every <strong style="user-select: auto;">two</strong> consecutive vertical bars <code style="user-select: auto;">'|'</code> are grouped into a <strong style="user-select: auto;">pair</strong>. In other words, the 1<sup style="user-select: auto;">st</sup> and 2<sup style="user-select: auto;">nd</sup> <code style="user-select: auto;">'|'</code> make a pair, the 3<sup style="user-select: auto;">rd</sup> and 4<sup style="user-select: auto;">th</sup> <code style="user-select: auto;">'|'</code> make a pair, and so forth.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the number of </em><code style="user-select: auto;">'*'</code><em style="user-select: auto;"> in </em><code style="user-select: auto;">s</code><em style="user-select: auto;">, <strong style="user-select: auto;">excluding</strong> the </em><code style="user-select: auto;">'*'</code><em style="user-select: auto;"> between each pair of </em><code style="user-select: auto;">'|'</code>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note</strong> that each <code style="user-select: auto;">'|'</code> will belong to <strong style="user-select: auto;">exactly</strong> one pair.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "l|*e*et|c**o|*de|"
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The considered characters are underlined: "<u style="user-select: auto;">l</u>|*e*et|<u style="user-select: auto;">c**o</u>|*de|".
The characters between the first and second '|' are excluded from the answer.
Also, the characters between the third and fourth '|' are excluded from the answer.
There are 2 asterisks considered. Therefore, we return 2.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "iamprogrammer"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> In this example, there are no asterisks in s. Therefore, we return 0.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "yo|uar|e**|b|e***au|tifu|l"
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> The considered characters are underlined: "<u style="user-select: auto;">yo</u>|uar|<u style="user-select: auto;">e**</u>|b|<u style="user-select: auto;">e***au</u>|tifu|<u style="user-select: auto;">l</u>". There are 5 asterisks considered. Therefore, we return 5.</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of lowercase English letters, vertical bars <code style="user-select: auto;">'|'</code>, and asterisks <code style="user-select: auto;">'*'</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> contains an <strong style="user-select: auto;">even</strong> number of vertical bars <code style="user-select: auto;">'|'</code>.</li>
</ul>
</div>