<h2><a href="https://leetcode.com/problems/maximum-number-of-balls-in-a-box/">1742. Maximum Number of Balls in a Box</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are working in a ball factory where you have <code style="user-select: auto;">n</code> balls numbered from <code style="user-select: auto;">lowLimit</code> up to <code style="user-select: auto;">highLimit</code> <strong style="user-select: auto;">inclusive</strong> (i.e., <code style="user-select: auto;">n == highLimit - lowLimit + 1</code>), and an infinite number of boxes numbered from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">infinity</code>.</p>

<p style="user-select: auto;">Your job at this factory is to put each ball in the box with a number equal to the sum of digits of the ball's number. For example, the ball number <code style="user-select: auto;">321</code> will be put in the box number <code style="user-select: auto;">3 + 2 + 1 = 6</code> and the ball number <code style="user-select: auto;">10</code> will be put in the box number <code style="user-select: auto;">1 + 0 = 1</code>.</p>

<p style="user-select: auto;">Given two integers <code style="user-select: auto;">lowLimit</code> and <code style="user-select: auto;">highLimit</code>, return<em style="user-select: auto;"> the number of balls in the box with the most balls.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> lowLimit = 1, highLimit = 10
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
Box Number:  1 2 3 4 5 6 7 8 9 10 11 ...
Ball Count:  2 1 1 1 1 1 1 1 1 0  0  ...
Box 1 has the most number of balls with 2 balls.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> lowLimit = 5, highLimit = 15
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
Box Number:  1 2 3 4 5 6 7 8 9 10 11 ...
Ball Count:  1 1 1 1 2 2 1 1 1 0  0  ...
Boxes 5 and 6 have the most number of balls with 2 balls in each.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> lowLimit = 19, highLimit = 28
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
Box Number:  1 2 3 4 5 6 7 8 9 10 11 12 ...
Ball Count:  0 1 1 1 1 1 1 1 1 2  0  0  ...
Box 10 has the most number of balls with 2 balls.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= lowLimit &lt;= highLimit &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>