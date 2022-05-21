# Find an Replace in String
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a string <strong style="user-select: auto;">S </strong>on which you need to perform <strong style="user-select: auto;">Q</strong> replace operations.</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">Each replacement operation has 3 parameters: a starting index i, a source word x and a target word y. The rule is that if x starts at position i in the <strong style="user-select: auto;">original</strong> <strong style="user-select: auto;">string S</strong>, then we will replace that occurrence of x with y. If not, we do nothing.<br style="user-select: auto;">
<strong style="user-select: auto;">Note: </strong></span> <span style="font-size: 18px; user-select: auto;">All these operations occur simultaneously. It's guaranteed that there won't be any overlap in replacement: for example, S = "abc", indexes = [0,1], sources = ["ab", "bc"] is not a valid test case. </span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
S = "gforks"
Q = 2
index[] = {0, 4}
sources[] = {"g", "ks"}
targets[] = {"geeks", "geeks"}
<strong style="user-select: auto;">Output</strong>: 
geeksforgeeks
<strong style="user-select: auto;">Explanation</strong>:
"g" starts at index 0, so, it's reaplaced by
"geeks". Similarly, "ks" starts at index 4,
and is replaced by "geeks".</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
S = "gforks"
Q = 2
index[] = {0, 3}
sources[] = {"g", "ss"}
targets[] = {"geeks", "geeks"}
<strong style="user-select: auto;">Output</strong>: 
geeksforks
<strong style="user-select: auto;">Explanation</strong>:
"g" starts at index 0, so, it's reaplaced by
"geeks". "ss" doesn't start at index 3 in
<strong style="user-select: auto;">original</strong> <strong style="user-select: auto;">S, </strong>so it's not replaced.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything.&nbsp;You only need to complete the function<strong style="user-select: auto;"> findAndReplace()&nbsp;</strong>that takes a string S, an integer Q, and 3 arrays index, sources, and targets of size Q, as input and returns the new string after all the operations. index[i], sources[i], and targets[i] denotes the index, sources, and targets for i<sub style="user-select: auto;">th</sub> query.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> &nbsp;O(|S| * Q)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space:</strong> O(Q)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 ≤ |S| ≤ 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
1 ≤ Q ≤ 100<br style="user-select: auto;">
1 ≤ length of sources<sub style="user-select: auto;">i</sub>, targets<sub style="user-select: auto;">i</sub> ≤ 100</span></p>
 <p style="user-select: auto;"></p>
            </div>