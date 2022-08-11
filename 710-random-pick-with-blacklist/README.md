<h2><a href="https://leetcode.com/problems/random-pick-with-blacklist/">710. Random Pick with Blacklist</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer <code style="user-select: auto;">n</code> and an array of <strong style="user-select: auto;">unique</strong> integers <code style="user-select: auto;">blacklist</code>. Design an algorithm to pick a random integer in the range <code style="user-select: auto;">[0, n - 1]</code> that is <strong style="user-select: auto;">not</strong> in <code style="user-select: auto;">blacklist</code>. Any integer that is in the mentioned range and not in <code style="user-select: auto;">blacklist</code> should be <strong style="user-select: auto;">equally likely</strong> to be returned.</p>

<p style="user-select: auto;">Optimize your algorithm such that it minimizes the number of calls to the <strong style="user-select: auto;">built-in</strong> random function of your language.</p>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">Solution</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">Solution(int n, int[] blacklist)</code> Initializes the object with the integer <code style="user-select: auto;">n</code> and the blacklisted integers <code style="user-select: auto;">blacklist</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int pick()</code> Returns a random integer in the range <code style="user-select: auto;">[0, n - 1]</code> and not in <code style="user-select: auto;">blacklist</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input</strong>
["Solution", "pick", "pick", "pick", "pick", "pick", "pick", "pick"]
[[7, [2, 3, 5]], [], [], [], [], [], [], []]
<strong style="user-select: auto;">Output</strong>
[null, 0, 4, 1, 6, 1, 0, 4]

<strong style="user-select: auto;">Explanation</strong>
Solution solution = new Solution(7, [2, 3, 5]);
solution.pick(); // return 0, any integer from [0,1,4,6] should be ok. Note that for every call of pick,
                 // 0, 1, 4, and 6 must be equally likely to be returned (i.e., with probability 1/4).
solution.pick(); // return 4
solution.pick(); // return 1
solution.pick(); // return 6
solution.pick(); // return 1
solution.pick(); // return 0
solution.pick(); // return 4
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= blacklist.length &lt;= min(10<sup style="user-select: auto;">5</sup>, n - 1)</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= blacklist[i] &lt; n</code></li>
	<li style="user-select: auto;">All the values of <code style="user-select: auto;">blacklist</code> are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">2 * 10<sup style="user-select: auto;">4</sup></code> calls will be made to <code style="user-select: auto;">pick</code>.</li>
</ul>
</div>