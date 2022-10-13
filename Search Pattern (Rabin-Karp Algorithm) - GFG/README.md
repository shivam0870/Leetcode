# Search Pattern (Rabin-Karp Algorithm)
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two strings, one is a text string and other is a pattern string. The task is to print the indexes of all the occurences of pattern&nbsp;string in the text string. For printing, Starting Index of a string should be taken as&nbsp;1.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
S = "batmanandrobinarebat", pat = "bat"
<strong style="user-select: auto;">Output:</strong> 1 18
<strong style="user-select: auto;">Explanation</strong>: The string "bat" occurs twice
in S, one starts are index 1 and the other
at index 18. </span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">â€‹<strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
S = "abesdu", pat = "edu"
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation</strong>: There's not substring "edu"
present in S.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">search()&nbsp;</strong>which takes the string S and the string pat as inputs and returns an array denoting the start indices (1-based)&nbsp;of substring pat in the string S.&nbsp;</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(|S|*|pat|).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=|S|&lt;=10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1&lt;=|pat|&lt;|S|</span></p>

<p style="user-select: auto;">&nbsp;</p>
</div>