# Help the Old Man!!!
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">A poor old man works in a palace for a living. One day the old man's wife met with an accident. She needed an immediate operation but the old man's savings were not enough for the operation. He went running to the king to beg for money. The king told that he will not only pay the full amount for the operation but also double his salary. But for that the old man had to pass a test. The king showed him a pile of glass plates kept one above another, each one being smaller than the one beneath. The plates were kept in box 1. He had to transfer the plates to box 3 using box 2. However, there were some constraints. The old man could only take one plate at a time and he could only place a&nbsp;smaller plate on top of a larger plate. He could take a plate only from the top. Help the old man do so. There are <strong style="user-select: auto;">N</strong> plates and he has to tell the <strong style="user-select: auto;">n</strong>th move in the format <strong style="user-select: auto;">(i, j)</strong> where a plate is being moved <strong style="user-select: auto;">from ith box to jth box.</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong><br style="user-select: auto;">
Given any number of plates, they can be transferred from box 1 to box 3 using box 2 using the following steps.<br style="user-select: auto;">
Step 1: Transfer first N-1 plates from box 1 to box 2 using box 3.<br style="user-select: auto;">
Step 2: Transfer the remaining plate from box 1 to box 3.<br style="user-select: auto;">
Step 3: Transfer the first N-1 plates from box 2 to box 3 using box 1.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> N = 2, n = 2
<strong style="user-select: auto;">Output:</strong> 1 3
<strong style="user-select: auto;">Explaination:</strong>  The plate on top of box 1 is 
first transferred to box 2. The second plate 
from box 1 is transferred to box 3 and finally 
the plate from box 2 is transferred to box 3. 
In each situation, all the constraints are 
satisfied. You are required to print the 2nd 
move which is "Move plate from box 1 to box 3", 
hence 1 3.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> N = 3, n = 4.
<strong style="user-select: auto;">Output:</strong> 1 3
<strong style="user-select: auto;">Explaination:</strong> The movements of plates will 
be from 1 to 3. Then from 1 to 2. Then from 
3 to 2. And finally 4th move from 1 to 3.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anyting. Your task is to complete the function <strong style="user-select: auto;">shiftPile()</strong> which takes N and n as input parameters and returns the nth move in a list.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(2<sup style="user-select: auto;">N</sup>)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 20<br style="user-select: auto;">
1 ≤ n ≤ 1000&nbsp;</span></p>
 <p style="user-select: auto;"></p>
            </div>