<h2><a href="https://leetcode.com/problems/find-the-difference-of-two-arrays/">2215. Find the Difference of Two Arrays</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two <strong style="user-select: auto;">0-indexed</strong> integer arrays <code style="user-select: auto;">nums1</code> and <code style="user-select: auto;">nums2</code>, return <em style="user-select: auto;">a list</em> <code style="user-select: auto;">answer</code> <em style="user-select: auto;">of size</em> <code style="user-select: auto;">2</code> <em style="user-select: auto;">where:</em></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">answer[0]</code> <em style="user-select: auto;">is a list of all <strong style="user-select: auto;">distinct</strong> integers in</em> <code style="user-select: auto;">nums1</code> <em style="user-select: auto;">which are <strong style="user-select: auto;">not</strong> present in</em> <code style="user-select: auto;">nums2</code><em style="user-select: auto;">.</em></li>
	<li style="user-select: auto;"><code style="user-select: auto;">answer[1]</code> <em style="user-select: auto;">is a list of all <strong style="user-select: auto;">distinct</strong> integers in</em> <code style="user-select: auto;">nums2</code> <em style="user-select: auto;">which are <strong style="user-select: auto;">not</strong> present in</em> <code style="user-select: auto;">nums1</code>.</li>
</ul>

<p style="user-select: auto;"><strong style="user-select: auto;">Note</strong> that the integers in the lists may be returned in <strong style="user-select: auto;">any</strong> order.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [1,2,3], nums2 = [2,4,6]
<strong style="user-select: auto;">Output:</strong> [[1,3],[4,6]]
<strong style="user-select: auto;">Explanation:
</strong>For nums1, nums1[1] = 2 is present at index 0 of nums2, whereas nums1[0] = 1 and nums1[2] = 3 are not present in nums2. Therefore, answer[0] = [1,3].
For nums2, nums2[0] = 2 is present at index 1 of nums1, whereas nums2[1] = 4 and nums2[2] = 6 are not present in nums2. Therefore, answer[1] = [4,6].</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [1,2,3,3], nums2 = [1,1,2,2]
<strong style="user-select: auto;">Output:</strong> [[3],[]]
<strong style="user-select: auto;">Explanation:
</strong>For nums1, nums1[2] and nums1[3] are not present in nums2. Since nums1[2] == nums1[3], their value is only included once and answer[0] = [3].
Every integer in nums2 is present in nums1. Therefore, answer[1] = [].
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums1.length, nums2.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-1000 &lt;= nums1[i], nums2[i] &lt;= 1000</code></li>
</ul>
</div>