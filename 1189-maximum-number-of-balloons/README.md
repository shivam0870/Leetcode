<h2><a href="https://leetcode.com/problems/maximum-number-of-balloons/">1189. Maximum Number of Balloons</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a string <code style="user-select: auto;">text</code>, you want to use the characters of <code style="user-select: auto;">text</code> to form as many instances of the word <strong style="user-select: auto;">"balloon"</strong> as possible.</p>

<p style="user-select: auto;">You can use each character in <code style="user-select: auto;">text</code> <strong style="user-select: auto;">at most once</strong>. Return the maximum number of instances that can be formed.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2019/09/05/1536_ex1_upd.JPG" style="width: 132px; height: 35px; user-select: auto;"></strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> text = "nlaebolko"
<strong style="user-select: auto;">Output:</strong> 1
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2019/09/05/1536_ex2_upd.JPG" style="width: 267px; height: 35px; user-select: auto;"></strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> text = "loonbalxballpoon"
<strong style="user-select: auto;">Output:</strong> 2
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> text = "leetcode"
<strong style="user-select: auto;">Output:</strong> 0
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= text.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">text</code> consists of lower case English letters only.</li>
</ul>
</div>