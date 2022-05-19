# A Special Keyboard
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Imagine you have a special keyboard with all keys in a single row. The layout of characters on a keyboard is denoted by a string <strong style="user-select: auto;">S1</strong> of length 26. S1 is indexed from 0 to 25. Initially, your finger is at index 0.<br style="user-select: auto;">
To type a character, you have to move your finger to the index of the desired character. The time taken to move your finger from index i to index j is |j-i|, where || denotes absolute value.Find the time taken to type the string <strong style="user-select: auto;">S2 </strong>with the given keyboard layout.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
S1 = "abcdefghijklmnopqrstuvwxyz"
S2 = "cba"
<strong style="user-select: auto;">Output</strong>: 
4
<strong style="user-select: auto;">Explanation</strong>:
Initially we are at index 0. To type 'c',
it will take a time of abs(0-2) = 2. To, type
'b' next, it will take abs(2-1) = 1. And, for
'a', it will take abs(1-0) = 1 unit time.
So, total time = 2+1+1 = 4.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
S1 = "zyxwvutsrqponmlkjihgfedcba"
S2 = "a"
<strong style="user-select: auto;">Output</strong>: 
25
<strong style="user-select: auto;">Explanation</strong>:
'a' is at index 25. So, the time taken
to type 'a' will be abs(0-25) = 25.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything.&nbsp;You only need to complete the function<strong style="user-select: auto;"> findTime()&nbsp;</strong>that takes two strings S1, and S2 as input and returns an integer denoting time taken to type the string S2.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> &nbsp;O(|S2|)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space:</strong> O(1)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt; |S2| &lt; 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
Length of S1 is 26<br style="user-select: auto;">
S1 contains all 26 alphabets in lower case</span></p>
 <p style="user-select: auto;"></p>
            </div>