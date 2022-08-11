<h2><a href="https://leetcode.com/problems/chalkboard-xor-game/">810. Chalkboard XOR Game</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of integers <code style="user-select: auto;">nums</code> represents the numbers written on a chalkboard.</p>

<p style="user-select: auto;">Alice and Bob take turns erasing exactly one number from the chalkboard, with Alice starting first. If erasing a number causes the bitwise XOR of all the elements of the chalkboard to become <code style="user-select: auto;">0</code>, then that player loses. The bitwise XOR of one element is that element itself, and the bitwise XOR of no elements is <code style="user-select: auto;">0</code>.</p>

<p style="user-select: auto;">Also, if any player starts their turn with the bitwise XOR of all the elements of the chalkboard equal to <code style="user-select: auto;">0</code>, then that player wins.</p>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if and only if Alice wins the game, assuming both players play optimally</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,1,2]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> 
Alice has two choices: erase 1 or erase 2. 
If she erases 1, the nums array becomes [1, 2]. The bitwise XOR of all the elements of the chalkboard is 1 XOR 2 = 3. Now Bob can remove any element he wants, because Alice will be the one to erase the last element and she will lose. 
If Alice erases 2 first, now nums become [1, 1]. The bitwise XOR of all the elements of the chalkboard is 1 XOR 1 = 0. Alice will lose.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [0,1]
<strong style="user-select: auto;">Output:</strong> true
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3]
<strong style="user-select: auto;">Output:</strong> true
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt; 2<sup style="user-select: auto;">16</sup></code></li>
</ul>
</div>