# Search in a Rotated Array
## Easy
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a sorted and rotated array A of N distinct elements which is rotated at some point, and given an element key. The task is to find the index of the given element key in the array A.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 9
A[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}
key = 10
<strong style="user-select: auto;">Output</strong>:
5
<strong style="user-select: auto;">Explanation</strong>: 10 is found at index 5.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2</strong>:</span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
N = 4
A[] = {3, 5, 1, 2}
key = 6</span><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">
Output</strong>:
-1</span><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">
Explanation</strong>: There is no element that has value 6.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task</strong>:<br style="user-select: auto;">
Complete the function&nbsp;search()&nbsp;which takes an array arr[] and start,&nbsp;end index of the array and the K&nbsp;as input parameters, and returns the answer.<br style="user-select: auto;">
<br style="user-select: auto;">
Can you solve it in expected time complexity?</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong>:&nbsp;O(log N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space</strong>:&nbsp;O(1).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints</strong>:<br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">7</sup><br style="user-select: auto;">
0 ≤ A[i] ≤ 10<sup style="user-select: auto;">8</sup><br style="user-select: auto;">
1 ≤ key ≤ 10<sup style="user-select: auto;">8</sup></span></p>

<p style="user-select: auto;">&nbsp;</p>
</div>