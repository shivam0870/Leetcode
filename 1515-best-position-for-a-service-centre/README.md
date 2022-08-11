<h2><a href="https://leetcode.com/problems/best-position-for-a-service-centre/">1515. Best Position for a Service Centre</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A delivery company wants to build a new service center in a new city. The company knows the positions of all the customers in this city on a 2D-Map and wants to build the new center in a position such that <strong style="user-select: auto;">the sum of the euclidean distances to all customers is minimum</strong>.</p>

<p style="user-select: auto;">Given an array <code style="user-select: auto;">positions</code> where <code style="user-select: auto;">positions[i] = [x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub>]</code> is the position of the <code style="user-select: auto;">ith</code> customer on the map, return <em style="user-select: auto;">the minimum sum of the euclidean distances</em> to all customers.</p>

<p style="user-select: auto;">In other words, you need to choose the position of the service center <code style="user-select: auto;">[x<sub style="user-select: auto;">centre</sub>, y<sub style="user-select: auto;">centre</sub>]</code> such that the following formula is minimized:</p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/06/25/q4_edited.jpg" style="user-select: auto;">
<p style="user-select: auto;">Answers within <code style="user-select: auto;">10<sup style="user-select: auto;">-5</sup></code> of the actual value will be accepted.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/06/25/q4_e1.jpg" style="width: 377px; height: 362px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> positions = [[0,1],[1,0],[1,2],[2,1]]
<strong style="user-select: auto;">Output:</strong> 4.00000
<strong style="user-select: auto;">Explanation:</strong> As shown, you can see that choosing [x<sub style="user-select: auto;">centre</sub>, y<sub style="user-select: auto;">centre</sub>] = [1, 1] will make the distance to each customer = 1, the sum of all distances is 4 which is the minimum possible we can achieve.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/06/25/q4_e3.jpg" style="width: 419px; height: 419px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> positions = [[1,1],[3,3]]
<strong style="user-select: auto;">Output:</strong> 2.82843
<strong style="user-select: auto;">Explanation:</strong> The minimum possible sum of distances = sqrt(2) + sqrt(2) = 2.82843
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= positions.length &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">positions[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub> &lt;= 100</code></li>
</ul>
</div>