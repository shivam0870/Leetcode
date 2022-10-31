# Overlapping Intervals
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a collection of Intervals, the task is to merge all of the overlapping Intervals.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong><span style="font-size: 18px; user-select: auto;">
Intervals = {{1,3},{2,4},{6,8},{9,10}}
<strong style="user-select: auto;">Output: </strong>{{1, 4}, {6, 8}, {9, 10}}<strong style="user-select: auto;">
Explanation: </strong>Given intervals: [1,3],[2,4]
[6,8],[9,10], we have only two overlapping
intervals here,[1,3] and [2,4]. Therefore
we will merge these two and return [1,4],
[6,8], [9,10].</span>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong><span style="font-size: 18px; user-select: auto;">
Intervals = {{6,8},{1,9},{2,4},{4,7}}
<strong style="user-select: auto;">Output: </strong>{{1, 9}}</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete the function<strong style="user-select: auto;"> overlappedInterval()</strong> that takes the list N intervals&nbsp;as input parameters and returns sorted list&nbsp;of intervals after merging.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity: </strong>O(N*Log(N)).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(Log(N)) or O(N).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 100<br style="user-select: auto;">
0 ≤ x ≤ y ≤ 1000</span></p>
</div>