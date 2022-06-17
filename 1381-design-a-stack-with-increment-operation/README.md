<h2><a href="https://leetcode.com/problems/design-a-stack-with-increment-operation/">1381. Design a Stack With Increment Operation</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Design a stack which supports the following operations.</p>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">CustomStack</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">CustomStack(int maxSize)</code> Initializes the object with <code style="user-select: auto;">maxSize</code> which is the maximum number of elements in the stack or do nothing if the stack reached the <code style="user-select: auto;">maxSize</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">void push(int x)</code>&nbsp;Adds <code style="user-select: auto;">x</code> to the top of the stack if the stack hasn't reached the <code style="user-select: auto;">maxSize</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int pop()</code>&nbsp;Pops and returns the top of stack or <strong style="user-select: auto;">-1</strong> if the stack is empty.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">void inc(int k, int val)</code> Increments the bottom <code style="user-select: auto;">k</code> elements of the stack by <code style="user-select: auto;">val</code>. If there are less than <code style="user-select: auto;">k</code> elements in the stack, just increment all the elements in the stack.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input</strong>
["CustomStack","push","push","pop","push","push","push","increment","increment","pop","pop","pop","pop"]
[[3],[1],[2],[],[2],[3],[4],[5,100],[2,100],[],[],[],[]]
<strong style="user-select: auto;">Output</strong>
[null,null,null,2,null,null,null,null,null,103,202,201,-1]
<strong style="user-select: auto;">Explanation</strong>
CustomStack customStack = new CustomStack(3); // Stack is Empty []
customStack.push(1);                          // stack becomes [1]
customStack.push(2);                          // stack becomes [1, 2]
customStack.pop();                            // return 2 --&gt; Return top of the stack 2, stack becomes [1]
customStack.push(2);                          // stack becomes [1, 2]
customStack.push(3);                          // stack becomes [1, 2, 3]
customStack.push(4);                          // stack still [1, 2, 3], Don't add another elements as size is 4
customStack.increment(5, 100);                // stack becomes [101, 102, 103]
customStack.increment(2, 100);                // stack becomes [201, 202, 103]
customStack.pop();                            // return 103 --&gt; Return top of the stack 103, stack becomes [201, 202]
customStack.pop();                            // return 202 --&gt; Return top of the stack 102, stack becomes [201]
customStack.pop();                            // return 201 --&gt; Return top of the stack 101, stack becomes []
customStack.pop();                            // return -1 --&gt; Stack is empty return -1.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= maxSize &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= x &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= val &lt;= 100</code></li>
	<li style="user-select: auto;">At most&nbsp;<code style="user-select: auto;">1000</code>&nbsp;calls will be made to each method of <code style="user-select: auto;">increment</code>, <code style="user-select: auto;">push</code> and <code style="user-select: auto;">pop</code> each separately.</li>
</ul>
</div>