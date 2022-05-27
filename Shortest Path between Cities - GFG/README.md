# Shortest Path between Cities
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Geek lives in a special city where houses are arranged in a hierarchial manner. Starting from house number 1, each house leads to two more houses. &nbsp;<br style="user-select: auto;">
1 leads to 2 and 3.&nbsp;<br style="user-select: auto;">
2 leads to 4 and 5.&nbsp;<br style="user-select: auto;">
3 leads to 6 and 7. and so on.&nbsp;<br style="user-select: auto;">
Given the house numbers on two houses x and y, find the length of the shortest path between them.&nbsp;</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
x = 2, y = 6
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong>
              1
          /      \
        /          \
       2             3
     /   \         /   \
    4     5       6     7         
   / \   / \     / \   / \
  8  9  10 11   12 13 14 15</span>
<span style="font-size: 18px; user-select: auto;">
The length of the shortest path between 2 
and 6 is 3. ie </span><span style="font-size: 18px; user-select: auto;">2-&gt; 1-&gt; 3-&gt; 6.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
x = 8, y = 10
<strong style="user-select: auto;">Output: </strong>4
<strong style="user-select: auto;">Explanation: </strong>8-&gt; 4-&gt; 2-&gt; 5-&gt; 10
The length of the shortest path between 8 
and 10 is 4. </span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Complete the function <strong style="user-select: auto;">shortestPath()</strong> which takes integers x and y as input parameters and returns the length of the shortest path from x to y.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(log(max(x,y)))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space: </strong>O(1)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:&nbsp;</strong><br style="user-select: auto;">
1 &lt;= x,y &lt;= 10<sup style="user-select: auto;">9</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>