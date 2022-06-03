# Tricky Subset Problem
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">N children are made to stand in a queue. Each of them is given a number A[i]. The teacher writes a number S on a page and passes it to the first child. Each child must add all the numbers they see on the page along with their own number, write the sum on the paper and pass it to the next person.&nbsp;<br style="user-select: auto;">
In the end, the teacher must determine if X can be formed by adding some of the numbers from the series of numbers written on the paper.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>
S = 1, N = 4, X = 7
A = {1, 2, 4, 2}
<strong style="user-select: auto;">Output:</strong> yes
<strong style="user-select: auto;">Explaination:</strong> The final sequence of 
numbers on the paper is 1, 2, 5, 12, 22. 
Using 2 and 5 we can form 7. </span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>
S = 100, N = 2, X = 500
A = {51, 88}
<strong style="user-select: auto;">Output: </strong>no
<strong style="user-select: auto;">Explaination:</strong> The final sequence of 
numbers on the paper is 100, 151, 339. 
Using these numbers we cannot form 500.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">isPossible() </strong>which takes S, N, X and array A as input parameters and returns 1 if there is a subset which adds to this sum. Otherwise returns 0.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity: </strong>O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space: </strong>O(N)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 ≤ S, A<sub style="user-select: auto;">i</sub>&nbsp;, X ≤ 10<sup style="user-select: auto;">18</sup>&nbsp;&nbsp;</span></p>
 <p style="user-select: auto;"></p>
            </div>