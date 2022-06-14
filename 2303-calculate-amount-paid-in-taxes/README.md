<h2><a href="https://leetcode.com/problems/calculate-amount-paid-in-taxes/">2303. Calculate Amount Paid in Taxes</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> 2D integer array <code style="user-select: auto;">brackets</code> where <code style="user-select: auto;">brackets[i] = [upper<sub style="user-select: auto;">i</sub>, percent<sub style="user-select: auto;">i</sub>]</code> means that the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> tax bracket has an upper bound of <code style="user-select: auto;">upper<sub style="user-select: auto;">i</sub></code> and is taxed at a rate of <code style="user-select: auto;">percent<sub style="user-select: auto;">i</sub></code>. The brackets are <strong style="user-select: auto;">sorted</strong> by upper bound (i.e. <code style="user-select: auto;">upper<sub style="user-select: auto;">i-1</sub> &lt; upper<sub style="user-select: auto;">i</sub></code> for <code style="user-select: auto;">0 &lt; i &lt; brackets.length</code>).</p>

<p style="user-select: auto;">Tax is calculated as follows:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The first <code style="user-select: auto;">upper<sub style="user-select: auto;">0</sub></code> dollars earned are taxed at a rate of <code style="user-select: auto;">percent<sub style="user-select: auto;">0</sub></code>.</li>
	<li style="user-select: auto;">The next <code style="user-select: auto;">upper<sub style="user-select: auto;">1</sub> - upper<sub style="user-select: auto;">0</sub></code> dollars earned are taxed at a rate of <code style="user-select: auto;">percent<sub style="user-select: auto;">1</sub></code>.</li>
	<li style="user-select: auto;">The next <code style="user-select: auto;">upper<sub style="user-select: auto;">2</sub> - upper<sub style="user-select: auto;">1</sub></code> dollars earned are taxed at a rate of <code style="user-select: auto;">percent<sub style="user-select: auto;">2</sub></code>.</li>
	<li style="user-select: auto;">And so on.</li>
</ul>

<p style="user-select: auto;">You are given an integer <code style="user-select: auto;">income</code> representing the amount of money you earned. Return <em style="user-select: auto;">the amount of money that you have to pay in taxes.</em> Answers within <code style="user-select: auto;">10<sup style="user-select: auto;">-5</sup></code> of the actual answer will be accepted.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> brackets = [[3,50],[7,10],[12,25]], income = 10
<strong style="user-select: auto;">Output:</strong> 2.65000
<strong style="user-select: auto;">Explanation:</strong>
The first 3 dollars you earn are taxed at 50%. You have to pay $3 * 50% = $1.50 dollars in taxes.
The next 7 - 3 = 4 dollars you earn are taxed at 10%. You have to pay $4 * 10% = $0.40 dollars in taxes.
The final 10 - 7 = 3 dollars you earn are taxed at 25%. You have to pay $3 * 25% = $0.75 dollars in taxes.
You have to pay a total of $1.50 + $0.40 + $0.75 = $2.65 dollars in taxes.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> brackets = [[1,0],[4,25],[5,50]], income = 2
<strong style="user-select: auto;">Output:</strong> 0.25000
<strong style="user-select: auto;">Explanation:</strong>
The first dollar you earn is taxed at 0%. You have to pay $1 * 0% = $0 dollars in taxes.
The second dollar you earn is taxed at 25%. You have to pay $1 * 25% = $0.25 dollars in taxes.
You have to pay a total of $0 + $0.25 = $0.25 dollars in taxes.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> brackets = [[2,50]], income = 0
<strong style="user-select: auto;">Output:</strong> 0.00000
<strong style="user-select: auto;">Explanation:</strong>
You have no income to tax, so you have to pay a total of $0 dollars in taxes.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= brackets.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= upper<sub style="user-select: auto;">i</sub> &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= percent<sub style="user-select: auto;">i</sub> &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= income &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">upper<sub style="user-select: auto;">i</sub></code> is sorted in ascending order.</li>
	<li style="user-select: auto;">All the values of <code style="user-select: auto;">upper<sub style="user-select: auto;">i</sub></code> are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;">The upper bound of the last tax bracket is greater than or equal to <code style="user-select: auto;">income</code>.</li>
</ul>
</div>