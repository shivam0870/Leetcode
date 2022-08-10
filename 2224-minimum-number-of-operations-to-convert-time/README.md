<h2><a href="https://leetcode.com/problems/minimum-number-of-operations-to-convert-time/">2224. Minimum Number of Operations to Convert Time</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two strings <code style="user-select: auto;">current</code> and <code style="user-select: auto;">correct</code> representing two <strong style="user-select: auto;">24-hour times</strong>.</p>

<p style="user-select: auto;">24-hour times are formatted as <code style="user-select: auto;">"HH:MM"</code>, where <code style="user-select: auto;">HH</code> is between <code style="user-select: auto;">00</code> and <code style="user-select: auto;">23</code>, and <code style="user-select: auto;">MM</code> is between <code style="user-select: auto;">00</code> and <code style="user-select: auto;">59</code>. The earliest 24-hour time is <code style="user-select: auto;">00:00</code>, and the latest is <code style="user-select: auto;">23:59</code>.</p>

<p style="user-select: auto;">In one operation you can increase the time <code style="user-select: auto;">current</code> by <code style="user-select: auto;">1</code>, <code style="user-select: auto;">5</code>, <code style="user-select: auto;">15</code>, or <code style="user-select: auto;">60</code> minutes. You can perform this operation <strong style="user-select: auto;">any</strong> number of times.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum number of operations</strong> needed to convert </em><code style="user-select: auto;">current</code><em style="user-select: auto;"> to </em><code style="user-select: auto;">correct</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> current = "02:30", correct = "04:35"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:
</strong>We can convert current to correct in 3 operations as follows:
- Add 60 minutes to current. current becomes "03:30".
- Add 60 minutes to current. current becomes "04:30".
- Add 5 minutes to current. current becomes "04:35".
It can be proven that it is not possible to convert current to correct in fewer than 3 operations.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> current = "11:00", correct = "11:01"
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> We only have to add one minute to current, so the minimum number of operations needed is 1.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">current</code> and <code style="user-select: auto;">correct</code> are in the format <code style="user-select: auto;">"HH:MM"</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">current &lt;= correct</code></li>
</ul>
</div>