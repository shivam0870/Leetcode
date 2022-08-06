<h2><a href="https://leetcode.com/problems/student-attendance-record-i/">551. Student Attendance Record I</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">s</code> representing an attendance record for a student where each character signifies whether the student was absent, late, or present on that day. The record only contains the following three characters:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">'A'</code>: Absent.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">'L'</code>: Late.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">'P'</code>: Present.</li>
</ul>

<p style="user-select: auto;">The student is eligible for an attendance award if they meet <strong style="user-select: auto;">both</strong> of the following criteria:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The student was absent (<code style="user-select: auto;">'A'</code>) for <strong style="user-select: auto;">strictly</strong> fewer than 2 days <strong style="user-select: auto;">total</strong>.</li>
	<li style="user-select: auto;">The student was <strong style="user-select: auto;">never</strong> late (<code style="user-select: auto;">'L'</code>) for 3 or more <strong style="user-select: auto;">consecutive</strong> days.</li>
</ul>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code><em style="user-select: auto;"> if the student is eligible for an attendance award, or </em><code style="user-select: auto;">false</code><em style="user-select: auto;"> otherwise</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "PPALLP"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> The student has fewer than 2 absences and was never late 3 or more consecutive days.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "PPALLL"
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> The student was late 3 consecutive days in the last 3 days, so is not eligible for the award.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s[i]</code> is either <code style="user-select: auto;">'A'</code>, <code style="user-select: auto;">'L'</code>, or <code style="user-select: auto;">'P'</code>.</li>
</ul>
</div>