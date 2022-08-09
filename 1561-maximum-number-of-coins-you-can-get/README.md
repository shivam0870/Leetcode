<h2><a href="https://leetcode.com/problems/maximum-number-of-coins-you-can-get/">1561. Maximum Number of Coins You Can Get</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There are <code style="user-select: auto;">3n</code> piles of coins of varying size, you and your friends will take piles of coins as follows:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">In each step, you will choose <strong style="user-select: auto;">any </strong><code style="user-select: auto;">3</code> piles of coins (not necessarily consecutive).</li>
	<li style="user-select: auto;">Of your choice, Alice will pick the pile with the maximum number of coins.</li>
	<li style="user-select: auto;">You will pick the next pile with the maximum number of coins.</li>
	<li style="user-select: auto;">Your friend Bob will pick the last pile.</li>
	<li style="user-select: auto;">Repeat until there are no more piles of coins.</li>
</ul>

<p style="user-select: auto;">Given an array of integers <code style="user-select: auto;">piles</code> where <code style="user-select: auto;">piles[i]</code> is the number of coins in the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> pile.</p>

<p style="user-select: auto;">Return the maximum number of coins that you can have.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> piles = [2,4,1,2,7,8]
<strong style="user-select: auto;">Output:</strong> 9
<strong style="user-select: auto;">Explanation: </strong>Choose the triplet (2, 7, 8), Alice Pick the pile with 8 coins, you the pile with <strong style="user-select: auto;">7</strong> coins and Bob the last one.
Choose the triplet (1, 2, 4), Alice Pick the pile with 4 coins, you the pile with <strong style="user-select: auto;">2</strong> coins and Bob the last one.
The maximum number of coins which you can have are: 7 + 2 = 9.
On the other hand if we choose this arrangement (1, <strong style="user-select: auto;">2</strong>, 8), (2, <strong style="user-select: auto;">4</strong>, 7) you only get 2 + 4 = 6 coins which is not optimal.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> piles = [2,4,5]
<strong style="user-select: auto;">Output:</strong> 4
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> piles = [9,8,7,6,5,1,2,3,4]
<strong style="user-select: auto;">Output:</strong> 18
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= piles.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">piles.length % 3 == 0</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= piles[i] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>