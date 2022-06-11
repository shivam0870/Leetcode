# Magnet Array Problem
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given <strong style="user-select: auto;">N</strong> Magnets which are placed linearly, with each magnet to be considered as of point object. Each magnet suffers force from its left sided magnets such that they repel it to the right and vice versa. <strong style="user-select: auto;">All forces are repulsive</strong>. The force being equal to the distance (1/d ,&nbsp;d being the distance). Now given the positions of the magnets, the task to find&nbsp;all the points along the linear line where net force is <strong style="user-select: auto;">ZERO</strong>.&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">More Formally, Magnets are placed on X axis, the coordinates of which are given, you are asked to find out the X-co-ordinates of all the equilibrium points (i.e. the point where net force is zero). You notice the point each magnet repels each other, it means the polarity of the magnet is such that exerts +ve force in its right side and -ve force in left side, (here +ve is considered in +ve direction of x-axis). And that forces are inversely proportional to the distance, thus there lies an equilibrium point between every two magnetic points. Thus there will be total of <strong style="user-select: auto;">N-1</strong> equllibrium points. You have to find those N-1 points.<br style="user-select: auto;">
<strong style="user-select: auto;">Note:</strong> Array <strong style="user-select: auto;">M[]</strong> is <strong style="user-select: auto;">sorted</strong> and distance have to be calculated with precision of <strong style="user-select: auto;">2 decimal places</strong>.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 2
M[] = {1, 2}
<strong style="user-select: auto;">Output:</strong>
1.50
<strong style="user-select: auto;">Explanation:
</strong>The mid point of two points will have 
net force zero, thus answer = 1.50
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 4
M[] = {0, 10, 20, 30}
<strong style="user-select: auto;">Output:</strong>
3.82, 15.00, 26.18</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">nullPoints()</strong>&nbsp;which takes the array <strong style="user-select: auto;">M[]</strong>, its size <strong style="user-select: auto;">N </strong>as inputs and an answer array<strong style="user-select: auto;"> getAnswer[] </strong>to <strong style="user-select: auto;">store</strong> the points having <strong style="user-select: auto;">net force zero</strong> till precised two decimal places.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N<sup style="user-select: auto;">2</sup>&nbsp;* Log(N))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
2 ≤ N ≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
0 ≤ &nbsp;M[1] &lt; ....M[i] &lt; M[i+1] &lt; ....M[N] ≤ 10<sup style="user-select: auto;">6</sup></span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>