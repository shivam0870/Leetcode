# Count pairs in array divisible by K
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array&nbsp;<strong style="user-select: auto;">A[]&nbsp;</strong>and positive integer&nbsp;<strong style="user-select: auto;">K</strong>, the task is to count total number of pairs in the array whose sum is divisible by&nbsp;<strong style="user-select: auto;">K</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input :</strong> 
A[] = {2, 2, 1, 7, 5, 3}, K = 4
<strong style="user-select: auto;">Output :</strong> 5
<strong style="user-select: auto;">Explanation : </strong>
There are five pairs possible whose sum
is divisible by '4' i.e., (2, 2), 
(1, 7), (7, 5), (1, 3) and (5, 3)</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input :</strong> 
A[] = {5, 9, 36, 74, 52, 31, 42}, K = 3
<strong style="user-select: auto;">Output :</strong> 7 
<strong style="user-select: auto;">Explanation : </strong>
There are seven pairs whose sum is divisible by 3, 
i.e, (9, 36), (9,42), </span><span style="font-size: 18px; user-select: auto;">(74, 52), (36, 42), (74, 31), 
(31, 5) and (5, 52).
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your task :</strong></span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You don't have to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">countKdivPairs()</strong> which takes the array, it's size and an integer K as input and returns the count of pairs whose sum is divisible by K.</span></div>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity :</strong> O(n)</span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space :</strong> O(k)</span></div>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints :</strong></span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 &lt;= N &lt;=10^6</span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 &lt;= A[i] &lt;= 10^6</span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 &lt;= K &lt;= 100</span></div>
 <p style="user-select: auto;"></p>
            </div>