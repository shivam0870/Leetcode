<h2><a href="https://leetcode.com/problems/rotate-string/">796. Rotate String</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two strings <code style="user-select: auto;">s</code> and <code style="user-select: auto;">goal</code>, return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if and only if</em> <code style="user-select: auto;">s</code> <em style="user-select: auto;">can become</em> <code style="user-select: auto;">goal</code> <em style="user-select: auto;">after some number of <strong style="user-select: auto;">shifts</strong> on</em> <code style="user-select: auto;">s</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">shift</strong> on <code style="user-select: auto;">s</code> consists of moving the leftmost character of <code style="user-select: auto;">s</code> to the rightmost position.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, if <code style="user-select: auto;">s = "abcde"</code>, then it will be <code style="user-select: auto;">"bcdea"</code> after one shift.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abcde", goal = "cdeab"
<strong style="user-select: auto;">Output:</strong> true
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre><p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abcde", goal = "abced"
<strong style="user-select: auto;">Output:</strong> false
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length, goal.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> and <code style="user-select: auto;">goal</code> consist of lowercase English letters.</li>
</ul>
</div>