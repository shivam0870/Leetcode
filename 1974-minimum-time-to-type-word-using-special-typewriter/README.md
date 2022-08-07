<h2><a href="https://leetcode.com/problems/minimum-time-to-type-word-using-special-typewriter/">1974. Minimum Time to Type Word Using Special Typewriter</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is a special typewriter with lowercase English letters <code style="user-select: auto;">'a'</code> to <code style="user-select: auto;">'z'</code> arranged in a <strong style="user-select: auto;">circle</strong> with a <strong style="user-select: auto;">pointer</strong>. A character can <strong style="user-select: auto;">only</strong> be typed if the pointer is pointing to that character. The pointer is <strong style="user-select: auto;">initially</strong> pointing to the character <code style="user-select: auto;">'a'</code>.</p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/07/31/chart.jpg" style="width: 530px; height: 410px; user-select: auto;">
<p style="user-select: auto;">Each second, you may perform one of the following operations:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Move the pointer one character <strong style="user-select: auto;">counterclockwise</strong> or <strong style="user-select: auto;">clockwise</strong>.</li>
	<li style="user-select: auto;">Type the character the pointer is <strong style="user-select: auto;">currently</strong> on.</li>
</ul>

<p style="user-select: auto;">Given a string <code style="user-select: auto;">word</code>, return the<strong style="user-select: auto;"> minimum</strong> number of seconds to type out the characters in <code style="user-select: auto;">word</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word = "abc"
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation: 
</strong>The characters are printed as follows:
- Type the character 'a' in 1 second since the pointer is initially on 'a'.
- Move the pointer clockwise to 'b' in 1 second.
- Type the character 'b' in 1 second.
- Move the pointer clockwise to 'c' in 1 second.
- Type the character 'c' in 1 second.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word = "bza"
<strong style="user-select: auto;">Output:</strong> 7
<strong style="user-select: auto;">Explanation:
</strong>The characters are printed as follows:
- Move the pointer clockwise to 'b' in 1 second.
- Type the character 'b' in 1 second.
- Move the pointer counterclockwise to 'z' in 2 seconds.
- Type the character 'z' in 1 second.
- Move the pointer clockwise to 'a' in 1 second.
- Type the character 'a' in 1 second.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word = "zjpc"
<strong style="user-select: auto;">Output:</strong> 34
<strong style="user-select: auto;">Explanation:</strong>
The characters are printed as follows:
- Move the pointer counterclockwise to 'z' in 1 second.
- Type the character 'z' in 1 second.
- Move the pointer clockwise to 'j' in 10 seconds.
- Type the character 'j' in 1 second.
- Move the pointer clockwise to 'p' in 6 seconds.
- Type the character 'p' in 1 second.
- Move the pointer counterclockwise to 'c' in 13 seconds.
- Type the character 'c' in 1 second.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= word.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">word</code> consists of lowercase English letters.</li>
</ul>
</div>