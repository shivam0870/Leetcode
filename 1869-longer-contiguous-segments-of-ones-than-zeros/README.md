<h2><a href="https://leetcode.com/problems/longer-contiguous-segments-of-ones-than-zeros/">1869. Longer Contiguous Segments of Ones than Zeros</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a binary string <code style="user-select: auto;">s</code>, return <code style="user-select: auto;">true</code><em style="user-select: auto;"> if the <strong style="user-select: auto;">longest</strong> contiguous segment of </em><code style="user-select: auto;">1</code>'<em style="user-select: auto;">s is <strong style="user-select: auto;">strictly longer</strong> than the <strong style="user-select: auto;">longest</strong> contiguous segment of </em><code style="user-select: auto;">0</code>'<em style="user-select: auto;">s in </em><code style="user-select: auto;">s</code>, or return <code style="user-select: auto;">false</code><em style="user-select: auto;"> otherwise</em>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, in <code style="user-select: auto;">s = "<u style="user-select: auto;">11</u>01<u style="user-select: auto;">000</u>10"</code> the longest continuous segment of <code style="user-select: auto;">1</code>s has length <code style="user-select: auto;">2</code>, and the longest continuous segment of <code style="user-select: auto;">0</code>s has length <code style="user-select: auto;">3</code>.</li>
</ul>

<p style="user-select: auto;">Note that if there are no <code style="user-select: auto;">0</code>'s, then the longest continuous segment of <code style="user-select: auto;">0</code>'s is considered to have a length <code style="user-select: auto;">0</code>. The same applies if there is no <code style="user-select: auto;">1</code>'s.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "1101"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong>
The longest contiguous segment of 1s has length 2: "<u style="user-select: auto;">11</u>01"
The longest contiguous segment of 0s has length 1: "11<u style="user-select: auto;">0</u>1"
The segment of 1s is longer, so return true.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "111000"
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong>
The longest contiguous segment of 1s has length 3: "<u style="user-select: auto;">111</u>000"
The longest contiguous segment of 0s has length 3: "111<u style="user-select: auto;">000</u>"
The segment of 1s is not longer, so return false.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "110100010"
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong>
The longest contiguous segment of 1s has length 2: "<u style="user-select: auto;">11</u>0100010"
The longest contiguous segment of 0s has length 3: "1101<u style="user-select: auto;">000</u>10"
The segment of 1s is not longer, so return false.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s[i]</code> is either <code style="user-select: auto;">'0'</code> or <code style="user-select: auto;">'1'</code>.</li>
</ul>
</div>