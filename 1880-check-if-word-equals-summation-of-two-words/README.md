<h2><a href="https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/">1880. Check if Word Equals Summation of Two Words</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">The <strong style="user-select: auto;">letter value</strong> of a letter is its position in the alphabet <strong style="user-select: auto;">starting from 0</strong> (i.e. <code style="user-select: auto;">'a' -&gt; 0</code>, <code style="user-select: auto;">'b' -&gt; 1</code>, <code style="user-select: auto;">'c' -&gt; 2</code>, etc.).</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">numerical value</strong> of some string of lowercase English letters <code style="user-select: auto;">s</code> is the <strong style="user-select: auto;">concatenation</strong> of the <strong style="user-select: auto;">letter values</strong> of each letter in <code style="user-select: auto;">s</code>, which is then <strong style="user-select: auto;">converted</strong> into an integer.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, if <code style="user-select: auto;">s = "acb"</code>, we concatenate each letter's letter value, resulting in <code style="user-select: auto;">"021"</code>. After converting it, we get <code style="user-select: auto;">21</code>.</li>
</ul>

<p style="user-select: auto;">You are given three strings <code style="user-select: auto;">firstWord</code>, <code style="user-select: auto;">secondWord</code>, and <code style="user-select: auto;">targetWord</code>, each consisting of lowercase English letters <code style="user-select: auto;">'a'</code> through <code style="user-select: auto;">'j'</code> <strong style="user-select: auto;">inclusive</strong>.</p>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if the <strong style="user-select: auto;">summation</strong> of the <strong style="user-select: auto;">numerical values</strong> of </em><code style="user-select: auto;">firstWord</code><em style="user-select: auto;"> and </em><code style="user-select: auto;">secondWord</code><em style="user-select: auto;"> equals the <strong style="user-select: auto;">numerical value</strong> of </em><code style="user-select: auto;">targetWord</code><em style="user-select: auto;">, or </em><code style="user-select: auto;">false</code><em style="user-select: auto;"> otherwise.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> firstWord = "acb", secondWord = "cba", targetWord = "cdb"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong>
The numerical value of firstWord is "acb" -&gt; "021" -&gt; 21.
The numerical value of secondWord is "cba" -&gt; "210" -&gt; 210.
The numerical value of targetWord is "cdb" -&gt; "231" -&gt; 231.
We return true because 21 + 210 == 231.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> firstWord = "aaa", secondWord = "a", targetWord = "aab"
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> 
The numerical value of firstWord is "aaa" -&gt; "000" -&gt; 0.
The numerical value of secondWord is "a" -&gt; "0" -&gt; 0.
The numerical value of targetWord is "aab" -&gt; "001" -&gt; 1.
We return false because 0 + 0 != 1.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> firstWord = "aaa", secondWord = "a", targetWord = "aaaa"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> 
The numerical value of firstWord is "aaa" -&gt; "000" -&gt; 0.
The numerical value of secondWord is "a" -&gt; "0" -&gt; 0.
The numerical value of targetWord is "aaaa" -&gt; "0000" -&gt; 0.
We return true because 0 + 0 == 0.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= firstWord.length, </code><code style="user-select: auto;">secondWord.length, </code><code style="user-select: auto;">targetWord.length &lt;= 8</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">firstWord</code>, <code style="user-select: auto;">secondWord</code>, and <code style="user-select: auto;">targetWord</code> consist of lowercase English letters from <code style="user-select: auto;">'a'</code> to <code style="user-select: auto;">'j'</code> <strong style="user-select: auto;">inclusive</strong>.</li>
</ul>
</div>