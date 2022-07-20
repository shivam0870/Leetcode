<h2><a href="https://leetcode.com/problems/increasing-decreasing-string/">1370. Increasing Decreasing String</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">s</code>. Reorder the string using the following algorithm:</p>

<ol style="user-select: auto;">
	<li style="user-select: auto;">Pick the <strong style="user-select: auto;">smallest</strong> character from <code style="user-select: auto;">s</code> and <strong style="user-select: auto;">append</strong> it to the result.</li>
	<li style="user-select: auto;">Pick the <strong style="user-select: auto;">smallest</strong> character from <code style="user-select: auto;">s</code> which is greater than the last appended character to the result and <strong style="user-select: auto;">append</strong> it.</li>
	<li style="user-select: auto;">Repeat step 2 until you cannot pick more characters.</li>
	<li style="user-select: auto;">Pick the <strong style="user-select: auto;">largest</strong> character from <code style="user-select: auto;">s</code> and <strong style="user-select: auto;">append</strong> it to the result.</li>
	<li style="user-select: auto;">Pick the <strong style="user-select: auto;">largest</strong> character from <code style="user-select: auto;">s</code> which is smaller than the last appended character to the result and <strong style="user-select: auto;">append</strong> it.</li>
	<li style="user-select: auto;">Repeat step 5 until you cannot pick more characters.</li>
	<li style="user-select: auto;">Repeat the steps from 1 to 6 until you pick all characters from <code style="user-select: auto;">s</code>.</li>
</ol>

<p style="user-select: auto;">In each step, If the smallest or the largest character appears more than once you can choose any occurrence and append it to the result.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the result string after sorting </em><code style="user-select: auto;">s</code><em style="user-select: auto;"> with this algorithm</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "aaaabbbbcccc"
<strong style="user-select: auto;">Output:</strong> "abccbaabccba"
<strong style="user-select: auto;">Explanation:</strong> After steps 1, 2 and 3 of the first iteration, result = "abc"
After steps 4, 5 and 6 of the first iteration, result = "abccba"
First iteration is done. Now s = "aabbcc" and we go back to step 1
After steps 1, 2 and 3 of the second iteration, result = "abccbaabc"
After steps 4, 5 and 6 of the second iteration, result = "abccbaabccba"
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "rat"
<strong style="user-select: auto;">Output:</strong> "art"
<strong style="user-select: auto;">Explanation:</strong> The word "rat" becomes "art" after re-ordering it with the mentioned algorithm.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of only lowercase English letters.</li>
</ul>
</div>