<h2><a href="https://leetcode.com/problems/self-dividing-numbers/">728. Self Dividing Numbers</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A <strong style="user-select: auto;">self-dividing number</strong> is a number that is divisible by every digit it contains.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, <code style="user-select: auto;">128</code> is <strong style="user-select: auto;">a self-dividing number</strong> because <code style="user-select: auto;">128 % 1 == 0</code>, <code style="user-select: auto;">128 % 2 == 0</code>, and <code style="user-select: auto;">128 % 8 == 0</code>.</li>
</ul>

<p style="user-select: auto;">A <strong style="user-select: auto;">self-dividing number</strong> is not allowed to contain the digit zero.</p>

<p style="user-select: auto;">Given two integers <code style="user-select: auto;">left</code> and <code style="user-select: auto;">right</code>, return <em style="user-select: auto;">a list of all the <strong style="user-select: auto;">self-dividing numbers</strong> in the range</em> <code style="user-select: auto;">[left, right]</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> left = 1, right = 22
<strong style="user-select: auto;">Output:</strong> [1,2,3,4,5,6,7,8,9,11,12,15,22]
</pre><p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> left = 47, right = 85
<strong style="user-select: auto;">Output:</strong> [48,55,66,77]
</pre>
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= left &lt;= right &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>