# Count digit groupings of a number
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a string str consisting of digits, one&nbsp;may group these digits into sub-groups while&nbsp;maintaining their original order.<br style="user-select: auto;">
The task is to count number of groupings such that for every sub-group except the last one, sum of digits in a sub-group is less than or equal to sum of the digits in the sub-group immediately on its right.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">For example, a valid grouping of digits of number 1119 is (1-11-9). Sum of digits in first subgroup is 1, next subgroup is 2, and last subgroup is 9. Sum of every subgroup is less than or equal to its immediate right.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:&nbsp;</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>str = "1119"
<strong style="user-select: auto;">Output: </strong>7
<strong style="user-select: auto;">Explanation: </strong></span><span style="font-size: 18px; user-select: auto;">[1-119], [1-1-19], [1-11-9], 
[1-1-1-9], [11-19], [111-9] and [1119] 
are seven sub-groups.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>str = "12"
<strong style="user-select: auto;">Output: </strong>2
<strong style="user-select: auto;">Explanation: </strong>[1-2] and [12] are two sub-groups.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">TotalCount()</strong>&nbsp;which takes the string str as input parameter and returns total possible groupings.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Time&nbsp;Complexity:&nbsp;</strong>O(N * N ) where N is length of string.<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Complexity:&nbsp;</strong>O(N * N)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= length of string&nbsp;&lt;= 100</span></p>
 <p style="user-select: auto;"></p>
            </div>