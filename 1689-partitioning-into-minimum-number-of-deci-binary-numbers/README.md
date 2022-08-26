<h2><a href="https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/">1689. Partitioning Into Minimum Number Of Deci-Binary Numbers</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A decimal number is called <strong style="user-select: auto;">deci-binary</strong> if each of its digits is either <code style="user-select: auto;">0</code> or <code style="user-select: auto;">1</code> without any leading zeros. For example, <code style="user-select: auto;">101</code> and <code style="user-select: auto;">1100</code> are <strong style="user-select: auto;">deci-binary</strong>, while <code style="user-select: auto;">112</code> and <code style="user-select: auto;">3001</code> are not.</p>

<p style="user-select: auto;">Given a string <code style="user-select: auto;">n</code> that represents a positive decimal integer, return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum</strong> number of positive <strong style="user-select: auto;">deci-binary</strong> numbers needed so that they sum up to </em><code style="user-select: auto;">n</code><em style="user-select: auto;">.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = "32"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> 10 + 11 + 11 = 32
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = "82734"
<strong style="user-select: auto;">Output:</strong> 8
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = "27346209830709182346"
<strong style="user-select: auto;">Output:</strong> 9
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n</code> consists of only digits.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">n</code> does not contain any leading zeros and represents a positive integer.</li>
</ul>
</div>