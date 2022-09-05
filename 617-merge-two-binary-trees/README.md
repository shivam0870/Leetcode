<h2><a href="https://leetcode.com/problems/merge-two-binary-trees/">617. Merge Two Binary Trees</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two binary trees <code style="user-select: auto;">root1</code> and <code style="user-select: auto;">root2</code>.</p>

<p style="user-select: auto;">Imagine that when you put one of them to cover the other, some nodes of the two trees are overlapped while the others are not. You need to merge the two trees into a new binary tree. The merge rule is that if two nodes overlap, then sum node values up as the new value of the merged node. Otherwise, the NOT null node will be used as the node of the new tree.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the merged tree</em>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note:</strong> The merging process must start from the root nodes of both trees.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/05/merge.jpg" style="width: 600px; height: 163px; user-select: auto;">
<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> root1 = [1,3,2,5], root2 = [2,1,3,null,4,null,7]
<strong style="user-select: auto;">Output:</strong> [3,4,5,5,4,null,7]
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> root1 = [1], root2 = [1,2]
<strong style="user-select: auto;">Output:</strong> [2,2]
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in both trees is in the range <code style="user-select: auto;">[0, 2000]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">4</sup> &lt;= Node.val &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>