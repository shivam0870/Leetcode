<h2><a href="https://leetcode.com/problems/arithmetic-subarrays/">1630. Arithmetic Subarrays</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A sequence of numbers is called <strong style="user-select: auto;">arithmetic</strong> if it consists of at least two elements, and the difference between every two consecutive elements is the same. More formally, a sequence <code style="user-select: auto;">s</code> is arithmetic if and only if <code style="user-select: auto;">s[i+1] - s[i] == s[1] - s[0] </code>for all valid <code style="user-select: auto;">i</code>.</p>

<p style="user-select: auto;">For example, these are <strong style="user-select: auto;">arithmetic</strong> sequences:</p>

<pre style="position: relative; user-select: auto;">1, 3, 5, 7, 9
7, 7, 7, 7
3, -1, -5, -9<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">The following sequence is not <strong style="user-select: auto;">arithmetic</strong>:</p>

<pre style="position: relative; user-select: auto;">1, 1, 2, 5, 7<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">You are given an array of <code style="user-select: auto;">n</code> integers, <code style="user-select: auto;">nums</code>, and two arrays of <code style="user-select: auto;">m</code> integers each, <code style="user-select: auto;">l</code> and <code style="user-select: auto;">r</code>, representing the <code style="user-select: auto;">m</code> range queries, where the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> query is the range <code style="user-select: auto;">[l[i], r[i]]</code>. All the arrays are <strong style="user-select: auto;">0-indexed</strong>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">a list of </em><code style="user-select: auto;">boolean</code> <em style="user-select: auto;">elements</em> <code style="user-select: auto;">answer</code><em style="user-select: auto;">, where</em> <code style="user-select: auto;">answer[i]</code> <em style="user-select: auto;">is</em> <code style="user-select: auto;">true</code> <em style="user-select: auto;">if the subarray</em> <code style="user-select: auto;">nums[l[i]], nums[l[i]+1], ... , nums[r[i]]</code><em style="user-select: auto;"> can be <strong style="user-select: auto;">rearranged</strong> to form an <strong style="user-select: auto;">arithmetic</strong> sequence, and</em> <code style="user-select: auto;">false</code> <em style="user-select: auto;">otherwise.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = <code style="user-select: auto;">[4,6,5,9,3,7]</code>, l = <code style="user-select: auto;">[0,0,2]</code>, r = <code style="user-select: auto;">[2,3,5]</code>
<strong style="user-select: auto;">Output:</strong> <code style="user-select: auto;">[true,false,true]</code>
<strong style="user-select: auto;">Explanation:</strong>
In the 0<sup style="user-select: auto;">th</sup> query, the subarray is [4,6,5]. This can be rearranged as [6,5,4], which is an arithmetic sequence.
In the 1<sup style="user-select: auto;">st</sup> query, the subarray is [4,6,5,9]. This cannot be rearranged as an arithmetic sequence.
In the 2<sup style="user-select: auto;">nd</sup> query, the subarray is <code style="user-select: auto;">[5,9,3,7]. This</code> can be rearranged as <code style="user-select: auto;">[3,5,7,9]</code>, which is an arithmetic sequence.<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [-12,-9,-3,-12,-6,15,20,-25,-20,-15,-10], l = [0,1,6,4,8,7], r = [4,4,9,7,9,10]
<strong style="user-select: auto;">Output:</strong> [false,true,false,false,true,true]
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == nums.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">m == l.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">m == r.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= l[i] &lt; r[i] &lt; n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">5</sup> &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>