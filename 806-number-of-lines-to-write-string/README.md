<h2><a href="https://leetcode.com/problems/number-of-lines-to-write-string/">806. Number of Lines To Write String</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">s</code> of lowercase English letters and an array <code style="user-select: auto;">widths</code> denoting <strong style="user-select: auto;">how many pixels wide</strong> each lowercase English letter is. Specifically, <code style="user-select: auto;">widths[0]</code> is the width of <code style="user-select: auto;">'a'</code>, <code style="user-select: auto;">widths[1]</code> is the width of <code style="user-select: auto;">'b'</code>, and so on.</p>

<p style="user-select: auto;">You are trying to write <code style="user-select: auto;">s</code> across several lines, where <strong style="user-select: auto;">each line is no longer than </strong><code style="user-select: auto;">100</code><strong style="user-select: auto;"> pixels</strong>. Starting at the beginning of <code style="user-select: auto;">s</code>, write as many letters on the first line such that the total width does not exceed <code style="user-select: auto;">100</code> pixels. Then, from where you stopped in <code style="user-select: auto;">s</code>, continue writing as many letters as you can on the second line. Continue this process until you have written all of <code style="user-select: auto;">s</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">an array </em><code style="user-select: auto;">result</code><em style="user-select: auto;"> of length 2 where:</em></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">result[0]</code><em style="user-select: auto;"> is the total number of lines.</em></li>
	<li style="user-select: auto;"><code style="user-select: auto;">result[1]</code><em style="user-select: auto;"> is the width of the last line in pixels.</em></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> widths = [10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10], s = "abcdefghijklmnopqrstuvwxyz"
<strong style="user-select: auto;">Output:</strong> [3,60]
<strong style="user-select: auto;">Explanation:</strong> You can write s as follows:
abcdefghij  // 100 pixels wide
klmnopqrst  // 100 pixels wide
uvwxyz      // 60 pixels wide
There are a total of 3 lines, and the last line is 60 pixels wide.<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> widths = [4,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10], s = "bbbcccdddaaa"
<strong style="user-select: auto;">Output:</strong> [2,4]
<strong style="user-select: auto;">Explanation:</strong> You can write s as follows:
bbbcccdddaa  // 98 pixels wide
a            // 4 pixels wide
There are a total of 2 lines, and the last line is 4 pixels wide.<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">widths.length == 26</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= widths[i] &lt;= 10</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> contains only lowercase English letters.</li>
</ul>
</div>