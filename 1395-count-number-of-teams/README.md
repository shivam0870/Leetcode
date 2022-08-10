<h2><a href="https://leetcode.com/problems/count-number-of-teams/">1395. Count Number of Teams</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There are <code style="user-select: auto;">n</code> soldiers standing in a line. Each soldier is assigned a <strong style="user-select: auto;">unique</strong> <code style="user-select: auto;">rating</code> value.</p>

<p style="user-select: auto;">You have to form a team of 3 soldiers amongst them under the following rules:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Choose 3 soldiers with index (<code style="user-select: auto;">i</code>, <code style="user-select: auto;">j</code>, <code style="user-select: auto;">k</code>) with rating (<code style="user-select: auto;">rating[i]</code>, <code style="user-select: auto;">rating[j]</code>, <code style="user-select: auto;">rating[k]</code>).</li>
	<li style="user-select: auto;">A team is valid if: (<code style="user-select: auto;">rating[i] &lt; rating[j] &lt; rating[k]</code>) or (<code style="user-select: auto;">rating[i] &gt; rating[j] &gt; rating[k]</code>) where (<code style="user-select: auto;">0 &lt;= i &lt; j &lt; k &lt; n</code>).</li>
</ul>

<p style="user-select: auto;">Return the number of teams you can form given the conditions. (soldiers can be part of multiple teams).</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> rating = [2,5,3,4,1]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> We can form three teams given the conditions. (2,3,4), (5,4,1), (5,3,1). 
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> rating = [2,1,3]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> We can't form any team given the conditions.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> rating = [1,2,3,4]
<strong style="user-select: auto;">Output:</strong> 4
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == rating.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= n &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= rating[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;">All the integers in <code style="user-select: auto;">rating</code> are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>