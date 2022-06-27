# Sum of elements between k1'th and k2'th smallest elements
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">A[]</strong>&nbsp;of <strong style="user-select: auto;">N</strong>&nbsp;positive&nbsp;integers and two positive integers <strong style="user-select: auto;">K<sub style="user-select: auto;">1</sub></strong> and <strong style="user-select: auto;">K<sub style="user-select: auto;">2</sub></strong>. Find the sum of all elements between K<sub style="user-select: auto;">1</sub><sup style="user-select: auto;">th</sup> and&nbsp;K<sub style="user-select: auto;">2</sub><sup style="user-select: auto;">th</sup> smallest elements of the array.&nbsp;</span></span><span style="font-size: 18px; user-select: auto;">It may be assumed that (1 &lt;= k1 &lt; k2 &lt;= n).</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span><span style="font-size: 18px; user-select: auto;">
N  = 7
A[] = {20, 8, 22, 4, 12, 10, 14}
K1 = 3, K2 = 6
<strong style="user-select: auto;">Output:</strong></span>
<span style="font-size: 18px; user-select: auto;">26
<strong style="user-select: auto;">Explanation:</strong></span><span style="font-size: 18px; user-select: auto;">
3rd smallest element is 10
6th smallest element is 20
Sum of all element between
K1 &amp; K2 is 12 + 14 = 26</span></span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>
N = 6
A[] = {10, 2, 50, 12, 48, 13}
K1= 2, K2 = 6
<strong style="user-select: auto;">Output:</strong></span><span style="font-size: 18px; user-select: auto;">
73</span></span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">sumBetweenTwoKth()</strong>&nbsp;which takes the array <strong style="user-select: auto;">A[]</strong>, its size <strong style="user-select: auto;">N</strong><strong style="user-select: auto;"> </strong>and two integers <strong style="user-select: auto;">K1</strong> and <strong style="user-select: auto;">K2</strong> as inputs and returns the sum of all the elements between K<sub style="user-select: auto;">1</sub><sup style="user-select: auto;">th</sup> and K<sub style="user-select: auto;">2</sub><sup style="user-select: auto;">th</sup> smallest elements.</span></span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N. log(N))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(N)</span></span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 ≤ K<sub style="user-select: auto;">1</sub>, K<sub style="user-select: auto;">2</sub> ≤ 10<sup style="user-select: auto;">9</sup></span></span></p>
 <p style="user-select: auto;"></p>
            </div>