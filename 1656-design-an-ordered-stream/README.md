<h2><a href="https://leetcode.com/problems/design-an-ordered-stream/">1656. Design an Ordered Stream</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is a stream of <code style="user-select: auto;">n</code> <code style="user-select: auto;">(idKey, value)</code> pairs arriving in an <strong style="user-select: auto;">arbitrary</strong> order, where <code style="user-select: auto;">idKey</code> is an integer between <code style="user-select: auto;">1</code> and <code style="user-select: auto;">n</code> and <code style="user-select: auto;">value</code> is a string. No two pairs have the same <code style="user-select: auto;">id</code>.</p>

<p style="user-select: auto;">Design a stream that returns the values in <strong style="user-select: auto;">increasing order of their IDs</strong> by returning a <strong style="user-select: auto;">chunk</strong> (list) of values after each insertion. The concatenation of all the <strong style="user-select: auto;">chunks</strong> should result in a list of the sorted values.</p>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">OrderedStream</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">OrderedStream(int n)</code> Constructs the stream to take <code style="user-select: auto;">n</code> values.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">String[] insert(int idKey, String value)</code> Inserts the pair <code style="user-select: auto;">(idKey, value)</code> into the stream, then returns the <strong style="user-select: auto;">largest possible chunk</strong> of currently inserted values that appear next in the order.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example:</strong></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2020/11/10/q1.gif" style="width: 682px; height: 240px; user-select: auto;"></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["OrderedStream", "insert", "insert", "insert", "insert", "insert"]
[[5], [3, "ccccc"], [1, "aaaaa"], [2, "bbbbb"], [5, "eeeee"], [4, "ddddd"]]
<strong style="user-select: auto;">Output</strong>
[null, [], ["aaaaa"], ["bbbbb", "ccccc"], [], ["ddddd", "eeeee"]]

<strong style="user-select: auto;">Explanation</strong>
// Note that the values ordered by ID is ["aaaaa", "bbbbb", "ccccc", "ddddd", "eeeee"].
OrderedStream os = new OrderedStream(5);
os.insert(3, "ccccc"); // Inserts (3, "ccccc"), returns [].
os.insert(1, "aaaaa"); // Inserts (1, "aaaaa"), returns ["aaaaa"].
os.insert(2, "bbbbb"); // Inserts (2, "bbbbb"), returns ["bbbbb", "ccccc"].
os.insert(5, "eeeee"); // Inserts (5, "eeeee"), returns [].
os.insert(4, "ddddd"); // Inserts (4, "ddddd"), returns ["ddddd", "eeeee"].
// Concatentating all the chunks returned:
// [] + ["aaaaa"] + ["bbbbb", "ccccc"] + [] + ["ddddd", "eeeee"] = ["aaaaa", "bbbbb", "ccccc", "ddddd", "eeeee"]
// The resulting order is the same as the order above.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= id &lt;= n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">value.length == 5</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">value</code>&nbsp;consists only of lowercase letters.</li>
	<li style="user-select: auto;">Each call to <code style="user-select: auto;">insert</code>&nbsp;will have a unique <code style="user-select: auto;">id.</code></li>
	<li style="user-select: auto;">Exactly <code style="user-select: auto;">n</code> calls will be made to <code style="user-select: auto;">insert</code>.</li>
</ul>
</div>