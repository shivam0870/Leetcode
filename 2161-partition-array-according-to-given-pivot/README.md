<h2><a href="https://leetcode.com/problems/partition-array-according-to-given-pivot/">2161. Partition Array According to Given Pivot</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">nums</code> and an integer <code style="user-select: auto;">pivot</code>. Rearrange <code style="user-select: auto;">nums</code> such that the following conditions are satisfied:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Every element less than <code style="user-select: auto;">pivot</code> appears <strong style="user-select: auto;">before</strong> every element greater than <code style="user-select: auto;">pivot</code>.</li>
	<li style="user-select: auto;">Every element equal to <code style="user-select: auto;">pivot</code> appears <strong style="user-select: auto;">in between</strong> the elements less than and greater than <code style="user-select: auto;">pivot</code>.</li>
	<li style="user-select: auto;">The <strong style="user-select: auto;">relative order</strong> of the elements less than <code style="user-select: auto;">pivot</code> and the elements greater than <code style="user-select: auto;">pivot</code> is maintained.
	<ul style="user-select: auto;">
		<li style="user-select: auto;">More formally, consider every <code style="user-select: auto;">p<sub style="user-select: auto;">i</sub></code>, <code style="user-select: auto;">p<sub style="user-select: auto;">j</sub></code> where <code style="user-select: auto;">p<sub style="user-select: auto;">i</sub></code> is the new position of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> element and <code style="user-select: auto;">p<sub style="user-select: auto;">j</sub></code> is the new position of the <code style="user-select: auto;">j<sup style="user-select: auto;">th</sup></code> element. For elements less than <code style="user-select: auto;">pivot</code>, if <code style="user-select: auto;">i &lt; j</code> and <code style="user-select: auto;">nums[i] &lt; pivot</code> and <code style="user-select: auto;">nums[j] &lt; pivot</code>, then <code style="user-select: auto;">p<sub style="user-select: auto;">i</sub> &lt; p<sub style="user-select: auto;">j</sub></code>. Similarly for elements greater than <code style="user-select: auto;">pivot</code>, if <code style="user-select: auto;">i &lt; j</code> and <code style="user-select: auto;">nums[i] &gt; pivot</code> and <code style="user-select: auto;">nums[j] &gt; pivot</code>, then <code style="user-select: auto;">p<sub style="user-select: auto;">i</sub> &lt; p<sub style="user-select: auto;">j</sub></code>.</li>
	</ul>
	</li>
</ul>

<p style="user-select: auto;">Return <code style="user-select: auto;">nums</code><em style="user-select: auto;"> after the rearrangement.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [9,12,5,10,14,3,10], pivot = 10
<strong style="user-select: auto;">Output:</strong> [9,5,3,10,10,12,14]
<strong style="user-select: auto;">Explanation:</strong> 
The elements 9, 5, and 3 are less than the pivot so they are on the left side of the array.
The elements 12 and 14 are greater than the pivot so they are on the right side of the array.
The relative ordering of the elements less than and greater than pivot is also maintained. [9, 5, 3] and [12, 14] are the respective orderings.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [-3,4,3,2], pivot = 2
<strong style="user-select: auto;">Output:</strong> [-3,2,4,3]
<strong style="user-select: auto;">Explanation:</strong> 
The element -3 is less than the pivot so it is on the left side of the array.
The elements 4 and 3 are greater than the pivot so they are on the right side of the array.
The relative ordering of the elements less than and greater than pivot is also maintained. [-3] and [4, 3] are the respective orderings.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">6</sup> &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">pivot</code> equals to an element of <code style="user-select: auto;">nums</code>.</li>
</ul>
</div>