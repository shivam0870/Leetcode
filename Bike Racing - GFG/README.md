# Bike Racing
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Geek is organising a bike race with N bikers. The initial speed of the ith biker is denoted by H<sub style="user-select: auto;">i</sub> Km/hr and the acceleration of ith biker as A<sub style="user-select: auto;">i</sub> Km/Hr2. A biker whose speed is 'L' or more, is considered be a fast biker. The total speed on the track for every hour is calculated by adding the speed of each fast biker in that hour. When the total speed on the track is 'M' kilometers per hour or more, the safety alarm turns on.&nbsp;<br style="user-select: auto;">
Find the minimum number of hours after which the safety alarm will start.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>
N = 3, M = 400, L = 120
H = {20, 50, 20}
A = {20, 70, 90}
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explaination: </strong>
Speeds of all the Bikers at ith hour
Biker1= [20  40  60  80 100] 
Biker2= [50 120 190 260 330]
Biker3= [20 110 200 290 380] </span>

<span style="font-size: 18px; user-select: auto;">Initial Speed on track  = 0 
because none of the biker's speed is fast enough.
Speed on track after 1st Hour= 120
Speed on track after 2nd Hour= 190+200=390
Speed on track after 3rd Hour= 260+290=550
Alarm will start at 3rd Hour.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>
N = 2, M = 60, L = 120
H = {50, 30}
A = {20, 40}
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explaination: </strong>
Speeds of all the Bikers at ith hour
Biker1= [50 70  90 110 130] 
Biker2= [30 70 110 150 190]</span>

<span style="font-size: 18px; user-select: auto;">Initial Speed on track = 0 because none of the 
biker's speed is fast enough.
Speed on track at 1st Hour= 0
Speed on track at 2nd Hour= 0
Speed on track at 3rd Hour= 150
Alarm will buzz at 3rd Hour.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">buzzTime() </strong>which takes N, M, L and array H and array A as input parameters and returns the time when alarm buzzes.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N*log(max(L,M)))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space: </strong>O(1)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 ≤ L, M ≤ 10<sup style="user-select: auto;">10</sup><br style="user-select: auto;">
1 ≤ H<sub style="user-select: auto;">i</sub>, A<sub style="user-select: auto;">i</sub> ≤ 10<sup style="user-select: auto;">9</sup> &nbsp;</span></p>
 <p style="user-select: auto;"></p>
            </div>