<h2><a href="https://leetcode.com/problems/count-common-words-with-one-occurrence/">2085. Count Common Words With One Occurrence</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two string arrays <code style="user-select: auto;">words1</code> and <code style="user-select: auto;">words2</code>, return <em style="user-select: auto;">the number of strings that appear <strong style="user-select: auto;">exactly once</strong> in <b style="user-select: auto;">each</b>&nbsp;of the two arrays.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words1 = ["leetcode","is","amazing","as","is"], words2 = ["amazing","leetcode","is"]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
- "leetcode" appears exactly once in each of the two arrays. We count this string.
- "amazing" appears exactly once in each of the two arrays. We count this string.
- "is" appears in each of the two arrays, but there are 2 occurrences of it in words1. We do not count this string.
- "as" appears once in words1, but does not appear in words2. We do not count this string.
Thus, there are 2 strings that appear exactly once in each of the two arrays.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words1 = ["b","bb","bbb"], words2 = ["a","aa","aaa"]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> There are no strings that appear in each of the two arrays.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words1 = ["a","ab"], words2 = ["a","a","a","ab"]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> The only string that appears exactly once in each of the two arrays is "ab".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words1.length, words2.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words1[i].length, words2[j].length &lt;= 30</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">words1[i]</code> and <code style="user-select: auto;">words2[j]</code> consists only of lowercase English letters.</li>
</ul>
</div>