# Farthest number
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">A</strong><strong style="user-select: auto;">rr[]</strong>&nbsp;of size&nbsp;<strong style="user-select: auto;">N</strong>. For every element in the array, the task is to find the index of the farthest element in the array to the right which is smaller than the current element. If no such number exists then print&nbsp;<strong style="user-select: auto;">-1</strong>.</span><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Note: </span></strong><span style="font-size: 18px; user-select: auto;">0 based indexing.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;"><lclighter data-id="lgt257749449" data-bundle-id="0" style="background-image: linear-gradient(transparent 0%, transparent calc(50% - 4px), rgb(204, 242, 241) calc(50% - 4px), rgb(204, 242, 241) 100%); transition: background-position 120ms ease-in-out 0s, padding 120ms ease-in-out 0s; background-size: 100% 200%; background-position: initial; user-select: auto;">Input:</lclighter><div class="LinerThreadIcon LinerFirst " data-highlight-id="257749449" data-bundle-id="0" id="lgt257749449" style="background-image: url(&quot;https://profile.getliner.com/liner-service-bucket/user_photo_default/color-10/R.svg&quot;); user-select: auto;">
        <div class="LinerThreadIcon__dim" style="user-select: auto;"></div>
        <div class="LinerThreadIcon__mentioned" style="user-select: auto;">
          <div class="LinerThreadIcon__mentionedImg" style="user-select: auto;"></div>
        </div>
        <div class="LinerThreadIcon__onlyMe" style="user-select: auto;">
          <div class="LinerThreadIcon__onlyMeImg" style="user-select: auto;"></div>
        </div>
      </div></strong> </span>
<span style="font-size: 18px; user-select: auto;">N=5</span>
<span style="font-size: 18px; user-select: auto;">Arr[] = {3, 1, 5, 2, 4}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong> </span>
<span style="font-size: 18px; user-select: auto;">3 -1 4 -1 -1</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Explanation:</span></strong>
<span style="font-size: 18px; user-select: auto;">Arr[3] is the farthest smallest element
to the right of Arr[0].
Arr[4] is the farthest smallest element
to the right of Arr[2].
And for the rest of the elements, there is
no smaller element to their right.</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> </span>
<span style="font-size: 18px; user-select: auto;">N=5</span>
<span style="font-size: 18px; user-select: auto;">Arr[] = {1, 2, 3, 4, 0}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong> </span>
<span style="font-size: 18px; user-select: auto;">4 4 4 4 -1</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything. Your task is to complete the function<strong style="user-select: auto;"> farNumber()</strong>&nbsp;which takes the N&nbsp;(number of elements in Array Arr) ,Arr[], and returns the array&nbsp;of farthest element to the right for&nbsp;every&nbsp;element of the array.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N*logN)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(N)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Constraints:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 </span> <span style="font-size: 18px; user-select: auto;">≤ </span> <span style="font-size: 18px; user-select: auto;">N</span> <span style="font-size: 18px; user-select: auto;">≤ </span> <span style="font-size: 18px; user-select: auto;">1e5<br style="user-select: auto;">
0</span> <span style="font-size: 18px; user-select: auto;">≤ </span> <span style="font-size: 18px; user-select: auto;">Arr[i]</span>&nbsp;<span style="font-size: 18px; user-select: auto;">≤ </span> <span style="font-size: 18px; user-select: auto;">1e9&nbsp;</span></p>
 <p style="user-select: auto;"></p>
            </div>