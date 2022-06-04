<h2><a href="https://leetcode.com/problems/time-needed-to-buy-tickets/">2073. Time Needed to Buy Tickets</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There are <code style="user-select: auto;">n</code> people in a line queuing to buy tickets, where the <code style="user-select: auto;">0<sup style="user-select: auto;">th</sup></code> person is at the <strong style="user-select: auto;">front</strong> of the line and the <code style="user-select: auto;">(n - 1)<sup style="user-select: auto;">th</sup></code> person is at the <strong style="user-select: auto;">back</strong> of the line.</p>

<p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">tickets</code> of length <code style="user-select: auto;">n</code> where the number of tickets that the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> person would like to buy is <code style="user-select: auto;">tickets[i]</code>.</p>

<p style="user-select: auto;">Each person takes <strong style="user-select: auto;">exactly 1 second</strong> to buy a ticket. A person can only buy <strong style="user-select: auto;">1 ticket at a time</strong> and has to go back to <strong style="user-select: auto;">the end</strong> of the line (which happens <strong style="user-select: auto;">instantaneously</strong>) in order to buy more tickets. If a person does not have any tickets left to buy, the person will <strong style="user-select: auto;">leave </strong>the line.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">time taken</strong> for the person at position </em><code style="user-select: auto;">k</code><em style="user-select: auto;">&nbsp;</em><strong style="user-select: auto;"><em style="user-select: auto;">(0-indexed)</em>&nbsp;</strong><em style="user-select: auto;">to finish buying tickets</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> tickets = [2,3,2], k = 2
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> 
- In the first pass, everyone in the line buys a ticket and the line becomes [1, 2, 1].
- In the second pass, everyone in the line buys a ticket and the line becomes [0, 1, 0].
The person at&nbsp;position 2 has successfully bought 2 tickets and it took 3 + 3 = 6 seconds.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> tickets = [5,1,1,1], k = 0
<strong style="user-select: auto;">Output:</strong> 8
<strong style="user-select: auto;">Explanation:</strong>
- In the first pass, everyone in the line buys a ticket and the line becomes [4, 0, 0, 0].
- In the next 4 passes, only the person in position 0 is buying tickets.
The person at&nbsp;position 0 has successfully bought 5 tickets and it took 4 + 1 + 1 + 1 + 1 = 8 seconds.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == tickets.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= tickets[i] &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= k &lt; n</code></li>
</ul>
</div>