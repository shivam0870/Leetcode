<h2><a href="https://leetcode.com/problems/number-of-different-integers-in-a-string/">1805. Number of Different Integers in a String</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">word</code> that consists of digits and lowercase English letters.</p>

<p style="user-select: auto;">You will replace every non-digit character with a space. For example, <code style="user-select: auto;">"a123bc34d8ef34"</code> will become <code style="user-select: auto;">" 123&nbsp; 34 8&nbsp; 34"</code>. Notice that you are left with some integers that are separated by at least one space: <code style="user-select: auto;">"123"</code>, <code style="user-select: auto;">"34"</code>, <code style="user-select: auto;">"8"</code>, and <code style="user-select: auto;">"34"</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the number of <strong style="user-select: auto;">different</strong> integers after performing the replacement operations on </em><code style="user-select: auto;">word</code>.</p>

<p style="user-select: auto;">Two integers are considered different if their decimal representations <strong style="user-select: auto;">without any leading zeros</strong> are different.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word = "a<u style="user-select: auto;">123</u>bc<u style="user-select: auto;">34</u>d<u style="user-select: auto;">8</u>ef<u style="user-select: auto;">34</u>"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation: </strong>The three different integers are "123", "34", and "8". Notice that "34" is only counted once.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word = "leet<u style="user-select: auto;">1234</u>code<u style="user-select: auto;">234</u>"
<strong style="user-select: auto;">Output:</strong> 2
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word = "a<u style="user-select: auto;">1</u>b<u style="user-select: auto;">01</u>c<u style="user-select: auto;">001</u>"
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation: </strong>The three integers "1", "01", and "001" all represent the same integer because
the leading zeros are ignored when comparing their decimal values.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= word.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">word</code> consists of digits and lowercase English letters.</li>
</ul>
</div>