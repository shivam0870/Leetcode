# Help a Thief!!!
## Easy
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You have to help a thief to steal as many as GoldCoins as possible from a GoldMine. There he saw <strong style="user-select: auto;">N</strong> Gold Boxes an each Gold Boxes consists of <strong style="user-select: auto;">A<sub style="user-select: auto;">i</sub></strong> Plates each plates consists of <strong style="user-select: auto;">B<sub style="user-select: auto;">i</sub></strong> Gold Coins. Your task is to print the maximum gold coins theif can steal if he can take a maximum of T plates.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">T = </strong>3, <strong style="user-select: auto;">N = </strong>3</span><strong style="user-select: auto;"> </strong>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">A[] = </strong>{1, 2, 3}
<strong style="user-select: auto;">B[] = </strong>{3, 2, 1}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong></span>
<span style="font-size: 18px; user-select: auto;">7</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></span>
<span style="font-size: 18px; user-select: auto;">The thief will take 1 plate of coins
from the first box and 2 plate of coins
from the second plate. 3 + 2*2 = 7.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">T = </strong>0, <strong style="user-select: auto;">N = </strong>3</span><strong style="user-select: auto;"> </strong>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">A[] = </strong>{1, 3, 2}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">B[] = </strong>{2, 3, 1}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong></span>
<span style="font-size: 18px; user-select: auto;">0</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></span>
<span style="font-size: 18px; user-select: auto;">The thief can't take any plates.
So he can't steal any coins.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">maxCoins()</strong> which takes 2 Integers T, and N and two arrays A and B of size N as input and returns the maximum number of gold coins the thief can steal if he can take a maximum of T plates.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N*logN)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(N)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">0 &lt;= T,N &lt;= 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
1 &lt;= A[i] &lt;= 10<sup style="user-select: auto;">4</sup></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= B[i] &lt;= 10<sup style="user-select: auto;">4</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>