<h2><a href="https://leetcode.com/problems/watering-plants/">2079. Watering Plants</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You want to water <code style="user-select: auto;">n</code> plants in your garden with a watering can. The plants are arranged in a row and are labeled from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code> from left to right where the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> plant is located at <code style="user-select: auto;">x = i</code>. There is a river at <code style="user-select: auto;">x = -1</code> that you can refill your watering can at.</p>

<p style="user-select: auto;">Each plant needs a specific amount of water. You will water the plants in the following way:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Water the plants in order from left to right.</li>
	<li style="user-select: auto;">After watering the current plant, if you do not have enough water to <strong style="user-select: auto;">completely</strong> water the next plant, return to the river to fully refill the watering can.</li>
	<li style="user-select: auto;">You <strong style="user-select: auto;">cannot</strong> refill the watering can early.</li>
</ul>

<p style="user-select: auto;">You are initially at the river (i.e., <code style="user-select: auto;">x = -1</code>). It takes <strong style="user-select: auto;">one step</strong> to move <strong style="user-select: auto;">one unit</strong> on the x-axis.</p>

<p style="user-select: auto;">Given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">plants</code> of <code style="user-select: auto;">n</code> integers, where <code style="user-select: auto;">plants[i]</code> is the amount of water the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> plant needs, and an integer <code style="user-select: auto;">capacity</code> representing the watering can capacity, return <em style="user-select: auto;">the <strong style="user-select: auto;">number of steps</strong> needed to water all the plants</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> plants = [2,2,3,3], capacity = 5
<strong style="user-select: auto;">Output:</strong> 14
<strong style="user-select: auto;">Explanation:</strong> Start at the river with a full watering can:
- Walk to plant 0 (1 step) and water it. Watering can has 3 units of water.
- Walk to plant 1 (1 step) and water it. Watering can has 1 unit of water.
- Since you cannot completely water plant 2, walk back to the river to refill (2 steps).
- Walk to plant 2 (3 steps) and water it. Watering can has 2 units of water.
- Since you cannot completely water plant 3, walk back to the river to refill (3 steps).
- Walk to plant 3 (4 steps) and water it.
Steps needed = 1 + 1 + 2 + 3 + 3 + 4 = 14.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> plants = [1,1,1,4,2,3], capacity = 4
<strong style="user-select: auto;">Output:</strong> 30
<strong style="user-select: auto;">Explanation:</strong> Start at the river with a full watering can:
- Water plants 0, 1, and 2 (3 steps). Return to river (3 steps).
- Water plant 3 (4 steps). Return to river (4 steps).
- Water plant 4 (5 steps). Return to river (5 steps).
- Water plant 5 (6 steps).
Steps needed = 3 + 3 + 4 + 4 + 5 + 5 + 6 = 30.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> plants = [7,7,7,7,7,7,7], capacity = 8
<strong style="user-select: auto;">Output:</strong> 49
<strong style="user-select: auto;">Explanation:</strong> You have to refill before watering each plant.
Steps needed = 1 + 1 + 2 + 2 + 3 + 3 + 4 + 4 + 5 + 5 + 6 + 6 + 7 = 49.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == plants.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= plants[i] &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">max(plants[i]) &lt;= capacity &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>