<h2><a href="https://leetcode.com/problems/destination-city/">1436. Destination City</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given the array <code style="user-select: auto;">paths</code>, where <code style="user-select: auto;">paths[i] = [cityA<sub style="user-select: auto;">i</sub>, cityB<sub style="user-select: auto;">i</sub>]</code> means there exists a direct path going from <code style="user-select: auto;">cityA<sub style="user-select: auto;">i</sub></code> to <code style="user-select: auto;">cityB<sub style="user-select: auto;">i</sub></code>. <em style="user-select: auto;">Return the destination city, that is, the city without any path outgoing to another city.</em></p>

<p style="user-select: auto;">It is guaranteed that the graph of paths forms a line without any loop, therefore, there will be exactly one destination city.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> paths = [["London","New York"],["New York","Lima"],["Lima","Sao Paulo"]]
<strong style="user-select: auto;">Output:</strong> "Sao Paulo" 
<strong style="user-select: auto;">Explanation:</strong> Starting at "London" city you will reach "Sao Paulo" city which is the destination city. Your trip consist of: "London" -&gt; "New York" -&gt; "Lima" -&gt; "Sao Paulo".
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> paths = [["B","C"],["D","B"],["C","A"]]
<strong style="user-select: auto;">Output:</strong> "A"
<strong style="user-select: auto;">Explanation:</strong> All possible trips are:&nbsp;
"D" -&gt; "B" -&gt; "C" -&gt; "A".&nbsp;
"B" -&gt; "C" -&gt; "A".&nbsp;
"C" -&gt; "A".&nbsp;
"A".&nbsp;
Clearly the destination city is "A".
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> paths = [["A","Z"]]
<strong style="user-select: auto;">Output:</strong> "Z"
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= paths.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">paths[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= cityA<sub style="user-select: auto;">i</sub>.length, cityB<sub style="user-select: auto;">i</sub>.length &lt;= 10</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">cityA<sub style="user-select: auto;">i</sub> != cityB<sub style="user-select: auto;">i</sub></code></li>
	<li style="user-select: auto;">All strings consist of lowercase and uppercase English letters and the space character.</li>
</ul>
</div>