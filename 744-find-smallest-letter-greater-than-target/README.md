<h2><a href="https://leetcode.com/problems/find-smallest-letter-greater-than-target/">744. Find Smallest Letter Greater Than Target</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a characters array <code style="user-select: auto;">letters</code> that is sorted in <strong style="user-select: auto;">non-decreasing</strong> order and a character <code style="user-select: auto;">target</code>, return <em style="user-select: auto;">the smallest character in the array that is larger than </em><code style="user-select: auto;">target</code>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note</strong> that the letters wrap around.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, if <code style="user-select: auto;">target == 'z'</code> and <code style="user-select: auto;">letters == ['a', 'b']</code>, the answer is <code style="user-select: auto;">'a'</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> letters = ["c","f","j"], target = "a"
<strong style="user-select: auto;">Output:</strong> "c"
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> letters = ["c","f","j"], target = "c"
<strong style="user-select: auto;">Output:</strong> "f"
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> letters = ["c","f","j"], target = "d"
<strong style="user-select: auto;">Output:</strong> "f"
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= letters.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">letters[i]</code> is a lowercase English letter.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">letters</code> is sorted in <strong style="user-select: auto;">non-decreasing</strong> order.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">letters</code> contains at least two different characters.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">target</code> is a lowercase English letter.</li>
</ul>
</div>