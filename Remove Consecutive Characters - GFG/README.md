# Remove Consecutive Characters
## Easy
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a string <strong style="user-select: auto;">S</strong>. For each index i(1&lt;=i&lt;=N-1), erase it if s[i] is equal to s[i-1] in the string.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
S = aabb
<strong style="user-select: auto;">Output:  </strong>ab 
<strong style="user-select: auto;">Explanation:</strong> 'a' at 2nd position is
appearing 2nd time consecutively.
Similiar explanation for b at
4th position.

</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
S = aabaa
<strong style="user-select: auto;">Output:  </strong>aba
<strong style="user-select: auto;">Explanation:</strong> 'a' at 2nd position is
appearing 2nd time consecutively.
'a' at fifth position is appearing
2nd time consecutively.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">You dont need to read input or print anything. Complete the function <strong style="user-select: auto;">removeConsecutiveCharacter()</strong> which accepts a string as input parameter and <strong style="user-select: auto;">returns</strong> modified string. </span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(|S|).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(|S|).</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=|S|&lt;=10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
All characters are lowercase alphabets.</span><br style="user-select: auto;">
&nbsp;</p>
</div>