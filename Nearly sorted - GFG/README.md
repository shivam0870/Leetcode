# Nearly sorted
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array of <strong style="user-select: auto;">n</strong> elements, where each element is at most <strong style="user-select: auto;">k</strong> away from its target position, you need to sort the array optimally.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n = 7, k = 3
arr[] = {6,5,3,2,8,10,9}
<strong style="user-select: auto;">Output: </strong>2 3 5 6 8 9 10<strong style="user-select: auto;">
Explanation: </strong>The sorted array will be
2 3 5 6 8 9 10</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n = 5, k = 2
arr[] = {3,1,4,2,5}
<strong style="user-select: auto;">Output: </strong>1 2 3 4 5 </span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note: DO NOT</strong> use STL sort() function for this question.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You are required to complete the&nbsp;method&nbsp;<strong style="user-select: auto;">nearlySorted()</strong> which takes 3&nbsp;arguments and returns the sorted array.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong> : O(nlogk)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space</strong> : O(n)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤&nbsp;n ≤&nbsp;10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
1 ≤&nbsp;k &lt;&nbsp;n<br style="user-select: auto;">
1 ≤&nbsp;arr<sub style="user-select: auto;">i </sub>≤&nbsp;10<sup style="user-select: auto;">7</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>