<h2><a href="https://leetcode.com/problems/intersection-of-multiple-arrays/">2248. Intersection of Multiple Arrays</a></h2><h3>Easy</h3><hr><div style="user-select: auto;">Given a 2D integer array <code style="user-select: auto;">nums</code> where <code style="user-select: auto;">nums[i]</code> is a non-empty array of <strong style="user-select: auto;">distinct</strong> positive integers, return <em style="user-select: auto;">the list of integers that are present in <strong style="user-select: auto;">each array</strong> of</em> <code style="user-select: auto;">nums</code><em style="user-select: auto;"> sorted in <strong style="user-select: auto;">ascending order</strong></em>.
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [[<u style="user-select: auto;"><strong style="user-select: auto;">3</strong></u>,1,2,<u style="user-select: auto;"><strong style="user-select: auto;">4</strong></u>,5],[1,2,<u style="user-select: auto;"><strong style="user-select: auto;">3</strong></u>,<u style="user-select: auto;"><strong style="user-select: auto;">4</strong></u>],[<u style="user-select: auto;"><strong style="user-select: auto;">3</strong></u>,<u style="user-select: auto;"><strong style="user-select: auto;">4</strong></u>,5,6]]
<strong style="user-select: auto;">Output:</strong> [3,4]
<strong style="user-select: auto;">Explanation:</strong> 
The only integers present in each of nums[0] = [<u style="user-select: auto;"><strong style="user-select: auto;">3</strong></u>,1,2,<u style="user-select: auto;"><strong style="user-select: auto;">4</strong></u>,5], nums[1] = [1,2,<u style="user-select: auto;"><strong style="user-select: auto;">3</strong></u>,<u style="user-select: auto;"><strong style="user-select: auto;">4</strong></u>], and nums[2] = [<u style="user-select: auto;"><strong style="user-select: auto;">3</strong></u>,<u style="user-select: auto;"><strong style="user-select: auto;">4</strong></u>,5,6] are 3 and 4, so we return [3,4].<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [[1,2,3],[4,5,6]]
<strong style="user-select: auto;">Output:</strong> []
<strong style="user-select: auto;">Explanation:</strong> 
There does not exist any integer present both in nums[0] and nums[1], so we return an empty list [].
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= sum(nums[i].length) &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i][j] &lt;= 1000</code></li>
	<li style="user-select: auto;">All the values of <code style="user-select: auto;">nums[i]</code> are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>