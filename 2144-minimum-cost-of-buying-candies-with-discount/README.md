<h2><a href="https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/">2144. Minimum Cost of Buying Candies With Discount</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A shop is selling candies at a discount. For <strong style="user-select: auto;">every two</strong> candies sold, the shop gives a <strong style="user-select: auto;">third</strong> candy for <strong style="user-select: auto;">free</strong>.</p>

<p style="user-select: auto;">The customer can choose <strong style="user-select: auto;">any</strong> candy to take away for free as long as the cost of the chosen candy is less than or equal to the <strong style="user-select: auto;">minimum</strong> cost of the two candies bought.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, if there are <code style="user-select: auto;">4</code> candies with costs <code style="user-select: auto;">1</code>, <code style="user-select: auto;">2</code>, <code style="user-select: auto;">3</code>, and <code style="user-select: auto;">4</code>, and the customer buys candies with costs <code style="user-select: auto;">2</code> and <code style="user-select: auto;">3</code>, they&nbsp;can take the candy with cost <code style="user-select: auto;">1</code> for free, but not the candy with cost <code style="user-select: auto;">4</code>.</li>
</ul>

<p style="user-select: auto;">Given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">cost</code>, where <code style="user-select: auto;">cost[i]</code> denotes the cost of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> candy, return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum cost</strong> of buying <strong style="user-select: auto;">all</strong> the candies</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> cost = [1,2,3]
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> We buy the candies with costs 2 and 3, and take the candy with cost 1 for free.
The total cost of buying all candies is 2 + 3 = 5. This is the <strong style="user-select: auto;">only</strong> way we can buy the candies.
Note that we cannot buy candies with costs 1 and 3, and then take the candy with cost 2 for free.
The cost of the free candy has to be less than or equal to the minimum cost of the purchased candies.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> cost = [6,5,7,9,2,2]
<strong style="user-select: auto;">Output:</strong> 23
<strong style="user-select: auto;">Explanation:</strong> The way in which we can get the minimum cost is described below:
- Buy candies with costs 9 and 7
- Take the candy with cost 6 for free
- We buy candies with costs 5 and 2
- Take the last remaining candy with cost 2 for free
Hence, the minimum cost to buy all candies is 9 + 7 + 5 + 2 = 23.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> cost = [5,5]
<strong style="user-select: auto;">Output:</strong> 10
<strong style="user-select: auto;">Explanation:</strong> Since there are only 2 candies, we buy both of them. There is not a third candy we can take for free.
Hence, the minimum cost to buy all candies is 5 + 5 = 10.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= cost.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= cost[i] &lt;= 100</code></li>
</ul>
</div>