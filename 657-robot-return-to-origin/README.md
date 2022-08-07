<h2><a href="https://leetcode.com/problems/robot-return-to-origin/">657. Robot Return to Origin</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is a robot starting at the position <code style="user-select: auto;">(0, 0)</code>, the origin, on a 2D plane. Given a sequence of its moves, judge if this robot <strong style="user-select: auto;">ends up at </strong><code style="user-select: auto;">(0, 0)</code> after it completes its moves.</p>

<p style="user-select: auto;">You are given a string <code style="user-select: auto;">moves</code> that represents the move sequence of the robot where <code style="user-select: auto;">moves[i]</code> represents its <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> move. Valid moves are <code style="user-select: auto;">'R'</code> (right), <code style="user-select: auto;">'L'</code> (left), <code style="user-select: auto;">'U'</code> (up), and <code style="user-select: auto;">'D'</code> (down).</p>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code><em style="user-select: auto;"> if the robot returns to the origin after it finishes all of its moves, or </em><code style="user-select: auto;">false</code><em style="user-select: auto;"> otherwise</em>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note</strong>: The way that the robot is "facing" is irrelevant. <code style="user-select: auto;">'R'</code> will always make the robot move to the right once, <code style="user-select: auto;">'L'</code> will always make it move left, etc. Also, assume that the magnitude of the robot's movement is the same for each move.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> moves = "UD"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation</strong>: The robot moves up once, and then down once. All moves have the same magnitude, so it ended up at the origin where it started. Therefore, we return true.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> moves = "LL"
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation</strong>: The robot moves left twice. It ends up two "moves" to the left of the origin. We return false because it is not at the origin at the end of its moves.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= moves.length &lt;= 2 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">moves</code> only contains the characters <code style="user-select: auto;">'U'</code>, <code style="user-select: auto;">'D'</code>, <code style="user-select: auto;">'L'</code> and <code style="user-select: auto;">'R'</code>.</li>
</ul>
</div>