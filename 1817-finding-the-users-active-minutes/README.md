<h2><a href="https://leetcode.com/problems/finding-the-users-active-minutes/">1817. Finding the Users Active Minutes</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given the logs for users' actions on LeetCode, and an integer <code style="user-select: auto;">k</code>. The logs are represented by a 2D integer array <code style="user-select: auto;">logs</code> where each <code style="user-select: auto;">logs[i] = [ID<sub style="user-select: auto;">i</sub>, time<sub style="user-select: auto;">i</sub>]</code> indicates that the user with <code style="user-select: auto;">ID<sub style="user-select: auto;">i</sub></code> performed an action at the minute <code style="user-select: auto;">time<sub style="user-select: auto;">i</sub></code>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Multiple users</strong> can perform actions simultaneously, and a single user can perform <strong style="user-select: auto;">multiple actions</strong> in the same minute.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">user active minutes (UAM)</strong> for a given user is defined as the <strong style="user-select: auto;">number of unique minutes</strong> in which the user performed an action on LeetCode. A minute can only be counted once, even if multiple actions occur during it.</p>

<p style="user-select: auto;">You are to calculate a <strong style="user-select: auto;">1-indexed</strong> array <code style="user-select: auto;">answer</code> of size <code style="user-select: auto;">k</code> such that, for each <code style="user-select: auto;">j</code> (<code style="user-select: auto;">1 &lt;= j &lt;= k</code>), <code style="user-select: auto;">answer[j]</code> is the <strong style="user-select: auto;">number of users</strong> whose <strong style="user-select: auto;">UAM</strong> equals <code style="user-select: auto;">j</code>.</p>

<p style="user-select: auto;">Return <i style="user-select: auto;">the array </i><code style="user-select: auto;">answer</code><i style="user-select: auto;"> as described above</i>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> logs = [[0,5],[1,2],[0,2],[0,5],[1,3]], k = 5
<strong style="user-select: auto;">Output:</strong> [0,2,0,0,0]
<strong style="user-select: auto;">Explanation:</strong>
The user with ID=0 performed actions at minutes 5, 2, and 5 again. Hence, they have a UAM of 2 (minute 5 is only counted once).
The user with ID=1 performed actions at minutes 2 and 3. Hence, they have a UAM of 2.
Since both users have a UAM of 2, answer[2] is 2, and the remaining answer[j] values are 0.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> logs = [[1,1],[2,2],[2,3]], k = 4
<strong style="user-select: auto;">Output:</strong> [1,1,0,0]
<strong style="user-select: auto;">Explanation:</strong>
The user with ID=1 performed a single action at minute 1. Hence, they have a UAM of 1.
The user with ID=2 performed actions at minutes 2 and 3. Hence, they have a UAM of 2.
There is one user with a UAM of 1 and one with a UAM of 2.
Hence, answer[1] = 1, answer[2] = 1, and the remaining values are 0.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= logs.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= ID<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= time<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">k</code> is in the range <code style="user-select: auto;">[The maximum <strong style="user-select: auto;">UAM</strong> for a user, 10<sup style="user-select: auto;">5</sup>]</code>.</li>
</ul>
</div>