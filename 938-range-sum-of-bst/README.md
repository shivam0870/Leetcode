<h2><a href="https://leetcode.com/problems/range-sum-of-bst/">938. Range Sum of BST</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the <code style="user-select: auto;">root</code> node of a binary search tree and two integers <code style="user-select: auto;">low</code> and <code style="user-select: auto;">high</code>, return <em style="user-select: auto;">the sum of values of all nodes with a value in the <strong style="user-select: auto;">inclusive</strong> range </em><code style="user-select: auto;">[low, high]</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/05/bst1.jpg" style="width: 400px; height: 222px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [10,5,15,3,7,null,18], low = 7, high = 15
<strong style="user-select: auto;">Output:</strong> 32
<strong style="user-select: auto;">Explanation:</strong> Nodes 7, 10, and 15 are in the range [7, 15]. 7 + 10 + 15 = 32.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/05/bst2.jpg" style="width: 400px; height: 335px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [10,5,15,3,7,13,18,1,null,6], low = 6, high = 10
<strong style="user-select: auto;">Output:</strong> 23
<strong style="user-select: auto;">Explanation:</strong> Nodes 6, 7, and 10 are in the range [6, 10]. 6 + 7 + 10 = 23.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is in the range <code style="user-select: auto;">[1, 2 * 10<sup style="user-select: auto;">4</sup>]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= Node.val &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= low &lt;= high &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;">All <code style="user-select: auto;">Node.val</code> are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>