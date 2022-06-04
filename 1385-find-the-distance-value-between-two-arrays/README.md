<h2><a href="https://leetcode.com/problems/find-the-distance-value-between-two-arrays/">1385. Find the Distance Value Between Two Arrays</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two integer arrays <code style="user-select: auto;">arr1</code> and <code style="user-select: auto;">arr2</code>, and the integer <code style="user-select: auto;">d</code>, <em style="user-select: auto;">return the distance value between the two arrays</em>.</p>

<p style="user-select: auto;">The distance value is defined as the number of elements <code style="user-select: auto;">arr1[i]</code> such that there is not any element <code style="user-select: auto;">arr2[j]</code> where <code style="user-select: auto;">|arr1[i]-arr2[j]| &lt;= d</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr1 = [4,5,8], arr2 = [10,9,1,8], d = 2
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> 
For arr1[0]=4 we have: 
|4-10|=6 &gt; d=2 
|4-9|=5 &gt; d=2 
|4-1|=3 &gt; d=2 
|4-8|=4 &gt; d=2 
For arr1[1]=5 we have: 
|5-10|=5 &gt; d=2 
|5-9|=4 &gt; d=2 
|5-1|=4 &gt; d=2 
|5-8|=3 &gt; d=2
For arr1[2]=8 we have:
<strong style="user-select: auto;">|8-10|=2 &lt;= d=2</strong>
<strong style="user-select: auto;">|8-9|=1 &lt;= d=2</strong>
|8-1|=7 &gt; d=2
<strong style="user-select: auto;">|8-8|=0 &lt;= d=2</strong>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr1 = [1,4,2,3], arr2 = [-4,-3,6,10,20,30], d = 3
<strong style="user-select: auto;">Output:</strong> 2
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr1 = [2,1,100,3], arr2 = [-5,-2,10,-3,7], d = 6
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr1.length, arr2.length &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-1000 &lt;= arr1[i], arr2[j] &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= d &lt;= 100</code></li>
</ul>
</div>