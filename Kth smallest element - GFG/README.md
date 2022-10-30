# Kth smallest element
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">arr[]</strong> and an integer&nbsp;<strong style="user-select: auto;">K</strong> where K is smaller than size of array, the task is to find the <strong style="user-select: auto;">K<sup style="user-select: auto;">th</sup> smallest</strong> element in the given array. It is given that all array elements are distinct.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span>
<span style="font-size: 18px; user-select: auto;">N = 6
arr[] = 7 10 4 3 20 15
K = 3</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output :</strong> 7</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Explanation :</span></strong>
<span style="font-size: 18px; user-select: auto;">3rd smallest element in the given 
array is 7.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span>
<span style="font-size: 18px; user-select: auto;">N = 5
arr[] = 7 10 4 20 15
K = 4</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output :</strong> 15</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Explanation :</span></strong>
<span style="font-size: 18px; user-select: auto;">4th smallest element in the given 
array is 15.</span></pre>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your&nbsp;Task:</strong><br style="user-select: auto;">
You don't have to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">kthSmallest() </strong>which takes the array <strong style="user-select: auto;">arr[]</strong>, integers&nbsp;<strong style="user-select: auto;">l</strong>&nbsp;and&nbsp;<strong style="user-select: auto;">r</strong>&nbsp;denoting the <strong style="user-select: auto;">starting</strong> and <strong style="user-select: auto;">ending</strong> index of the array&nbsp;and an integer <strong style="user-select: auto;">K</strong>&nbsp;as input<strong style="user-select: auto;">&nbsp;</strong>and returns the <strong style="user-select: auto;">K<sup style="user-select: auto;">th</sup></strong> smallest element. </span></div>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity: </strong>O(n)</span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space: </strong>O(log(n))</span></div>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= K &lt;= N</span><br style="user-select: auto;">
&nbsp;</p>
</div>