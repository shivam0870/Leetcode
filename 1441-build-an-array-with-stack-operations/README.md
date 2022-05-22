<h2><a href="https://leetcode.com/problems/build-an-array-with-stack-operations/">1441. Build an Array With Stack Operations</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array <code style="user-select: auto;">target</code> and an integer <code style="user-select: auto;">n</code>.</p>

<p style="user-select: auto;">In each iteration, you will read a number from <code style="user-select: auto;">list = [1, 2, 3, ..., n]</code>.</p>

<p style="user-select: auto;">Build the <code style="user-select: auto;">target</code> array using the following operations:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">"Push"</code>: Reads a new element from the beginning list, and pushes it in the array.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">"Pop"</code>: Deletes the last element of the array.</li>
	<li style="user-select: auto;">If the target array is already built, stop reading more elements.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">a list of the operations needed to build </em><code style="user-select: auto;">target</code>. The test cases are generated so that the answer is <strong style="user-select: auto;">unique</strong>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = [1,3], n = 3
<strong style="user-select: auto;">Output:</strong> ["Push","Push","Pop","Push"]
<strong style="user-select: auto;">Explanation:</strong> 
Read number 1 and automatically push in the array -&gt; [1]
Read number 2 and automatically push in the array then Pop it -&gt; [1]
Read number 3 and automatically push in the array -&gt; [1,3]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = [1,2,3], n = 3
<strong style="user-select: auto;">Output:</strong> ["Push","Push","Push"]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = [1,2], n = 4
<strong style="user-select: auto;">Output:</strong> ["Push","Push"]
<strong style="user-select: auto;">Explanation:</strong> You only need to read the first 2 numbers and stop.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= target.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= target[i] &lt;= n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">target</code> is strictly increasing.</li>
</ul>
</div>