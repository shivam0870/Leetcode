# Find all possible paths from top to bottom
## Easy
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a N x M grid. Find All possible paths from top left to bottom right.F<em style="user-select: auto;">rom each cell you can either move only to right or down</em>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong></span><span style="font-size: 18px; user-select: auto;">1 2 3</span>
<span style="font-size: 18px; user-select: auto;">       4 5 6</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output: </strong></span><span style="font-size: 18px; user-select: auto;">1 4 5 6</span>
<span style="font-size: 18px; user-select: auto;">        1 2 5 6 </span>
<span style="font-size: 18px; user-select: auto;">        1 2 3 6</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation: </strong>We can see that there are 3 </span>
<span style="font-size: 18px; user-select: auto;">paths from the cell (0,0) to (1,2).</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong></span><span style="font-size: 18px; user-select: auto;">1 2</span>
<span style="font-size: 18px; user-select: auto;">       3 4</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output: </strong></span><span style="font-size: 18px; user-select: auto;">1 2 4</span>
<span style="font-size: 18px; user-select: auto;">        1 3 4</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">findAllPossiblePaths()&nbsp;</strong>which takes&nbsp;two integers n,m and grid[][]&nbsp;&nbsp;as input parameters and returns all possible paths from the top left cell to bottom right cell&nbsp;in a 2d array.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(2^N*M)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= n,m &lt;= 10<sup style="user-select: auto;">&nbsp;</sup><br style="user-select: auto;">
1 &lt;= grid[i][j] &lt;= n*m<br style="user-select: auto;">
n * m &lt;&nbsp;20</span><br style="user-select: auto;">
&nbsp;</p>
</div>