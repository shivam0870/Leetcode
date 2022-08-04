<h2><a href="https://leetcode.com/problems/slowest-key/">1629. Slowest Key</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A newly designed keypad was tested, where a tester pressed a sequence of <code style="user-select: auto;">n</code> keys, one at a time.</p>

<p style="user-select: auto;">You are given a string <code style="user-select: auto;">keysPressed</code> of length <code style="user-select: auto;">n</code>, where <code style="user-select: auto;">keysPressed[i]</code> was the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> key pressed in the testing sequence, and a sorted list <code style="user-select: auto;">releaseTimes</code>, where <code style="user-select: auto;">releaseTimes[i]</code> was the time the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> key was released. Both arrays are <strong style="user-select: auto;">0-indexed</strong>. The <code style="user-select: auto;">0<sup style="user-select: auto;">th</sup></code> key was pressed at the time <code style="user-select: auto;">0</code>,&nbsp;and every subsequent key was pressed at the <strong style="user-select: auto;">exact</strong> time the previous key was released.</p>

<p style="user-select: auto;">The tester wants to know the key of the keypress that had the <strong style="user-select: auto;">longest duration</strong>. The <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code><sup style="user-select: auto;"> </sup>keypress had a <strong style="user-select: auto;">duration</strong> of <code style="user-select: auto;">releaseTimes[i] - releaseTimes[i - 1]</code>, and the <code style="user-select: auto;">0<sup style="user-select: auto;">th</sup></code> keypress had a duration of <code style="user-select: auto;">releaseTimes[0]</code>.</p>

<p style="user-select: auto;">Note that the same key could have been pressed multiple times during the test, and these multiple presses of the same key <strong style="user-select: auto;">may not</strong> have had the same <strong style="user-select: auto;">duration</strong>.</p>

<p style="user-select: auto;"><em style="user-select: auto;">Return the key of the keypress that had the <strong style="user-select: auto;">longest duration</strong>. If there are multiple such keypresses, return the lexicographically largest key of the keypresses.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> releaseTimes = [9,29,49,50], keysPressed = "cbcd"
<strong style="user-select: auto;">Output:</strong> "c"
<strong style="user-select: auto;">Explanation:</strong> The keypresses were as follows:
Keypress for 'c' had a duration of 9 (pressed at time 0 and released at time 9).
Keypress for 'b' had a duration of 29 - 9 = 20 (pressed at time 9 right after the release of the previous character and released at time 29).
Keypress for 'c' had a duration of 49 - 29 = 20 (pressed at time 29 right after the release of the previous character and released at time 49).
Keypress for 'd' had a duration of 50 - 49 = 1 (pressed at time 49 right after the release of the previous character and released at time 50).
The longest of these was the keypress for 'b' and the second keypress for 'c', both with duration 20.
'c' is lexicographically larger than 'b', so the answer is 'c'.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> releaseTimes = [12,23,36,46,62], keysPressed = "spuda"
<strong style="user-select: auto;">Output:</strong> "a"
<strong style="user-select: auto;">Explanation:</strong> The keypresses were as follows:
Keypress for 's' had a duration of 12.
Keypress for 'p' had a duration of 23 - 12 = 11.
Keypress for 'u' had a duration of 36 - 23 = 13.
Keypress for 'd' had a duration of 46 - 36 = 10.
Keypress for 'a' had a duration of 62 - 46 = 16.
The longest of these was the keypress for 'a' with duration 16.<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">releaseTimes.length == n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">keysPressed.length == n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= releaseTimes[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">releaseTimes[i] &lt; releaseTimes[i+1]</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">keysPressed</code> contains only lowercase English letters.</li>
</ul>
</div>