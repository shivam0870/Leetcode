<h2><a href="https://leetcode.com/problems/find-elements-in-a-contaminated-binary-tree/">1261. Find Elements in a Contaminated Binary Tree</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a binary tree with the following rules:</p>

<ol style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">root.val == 0</code></li>
	<li style="user-select: auto;">If <code style="user-select: auto;">treeNode.val == x</code> and <code style="user-select: auto;">treeNode.left != null</code>, then <code style="user-select: auto;">treeNode.left.val == 2 * x + 1</code></li>
	<li style="user-select: auto;">If <code style="user-select: auto;">treeNode.val == x</code> and <code style="user-select: auto;">treeNode.right != null</code>, then <code style="user-select: auto;">treeNode.right.val == 2 * x + 2</code></li>
</ol>

<p style="user-select: auto;">Now the binary tree is contaminated, which means all <code style="user-select: auto;">treeNode.val</code> have been changed to <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">FindElements</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">FindElements(TreeNode* root)</code> Initializes the object with a contaminated binary tree and recovers it.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">bool find(int target)</code> Returns <code style="user-select: auto;">true</code> if the <code style="user-select: auto;">target</code> value exists in the recovered binary tree.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/11/06/untitled-diagram-4-1.jpg" style="width: 320px; height: 119px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["FindElements","find","find"]
[[[-1,null,-1]],[1],[2]]
<strong style="user-select: auto;">Output</strong>
[null,false,true]
<strong style="user-select: auto;">Explanation</strong>
FindElements findElements = new FindElements([-1,null,-1]); 
findElements.find(1); // return False 
findElements.find(2); // return True </pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/11/06/untitled-diagram-4.jpg" style="width: 400px; height: 198px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["FindElements","find","find","find"]
[[[-1,-1,-1,-1,-1]],[1],[3],[5]]
<strong style="user-select: auto;">Output</strong>
[null,true,true,false]
<strong style="user-select: auto;">Explanation</strong>
FindElements findElements = new FindElements([-1,-1,-1,-1,-1]);
findElements.find(1); // return True
findElements.find(3); // return True
findElements.find(5); // return False</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/11/07/untitled-diagram-4-1-1.jpg" style="width: 306px; height: 274px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["FindElements","find","find","find","find"]
[[[-1,null,-1,-1,null,-1]],[2],[3],[4],[5]]
<strong style="user-select: auto;">Output</strong>
[null,true,false,false,true]
<strong style="user-select: auto;">Explanation</strong>
FindElements findElements = new FindElements([-1,null,-1,-1,null,-1]);
findElements.find(2); // return True
findElements.find(3); // return False
findElements.find(4); // return False
findElements.find(5); // return True
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">TreeNode.val == -1</code></li>
	<li style="user-select: auto;">The height of the binary tree is less than or equal to <code style="user-select: auto;">20</code></li>
	<li style="user-select: auto;">The total number of nodes is between <code style="user-select: auto;">[1, 10<sup style="user-select: auto;">4</sup>]</code></li>
	<li style="user-select: auto;">Total calls of <code style="user-select: auto;">find()</code> is between <code style="user-select: auto;">[1, 10<sup style="user-select: auto;">4</sup>]</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= target &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
</ul>
</div>