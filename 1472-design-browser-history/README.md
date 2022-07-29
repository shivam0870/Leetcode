<h2><a href="https://leetcode.com/problems/design-browser-history/">1472. Design Browser History</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have a <strong style="user-select: auto;">browser</strong> of one tab where you start on the <code style="user-select: auto;">homepage</code> and you can visit another <code style="user-select: auto;">url</code>, get back in the history number of <code style="user-select: auto;">steps</code> or move forward in the history number of <code style="user-select: auto;">steps</code>.</p>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">BrowserHistory</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">BrowserHistory(string homepage)</code> Initializes the object with the <code style="user-select: auto;">homepage</code>&nbsp;of the browser.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">void visit(string url)</code>&nbsp;Visits&nbsp;<code style="user-select: auto;">url</code> from the current page. It clears up all the forward history.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">string back(int steps)</code>&nbsp;Move <code style="user-select: auto;">steps</code> back in history. If you can only return <code style="user-select: auto;">x</code> steps in the history and <code style="user-select: auto;">steps &gt; x</code>, you will&nbsp;return only <code style="user-select: auto;">x</code> steps. Return the current <code style="user-select: auto;">url</code>&nbsp;after moving back in history <strong style="user-select: auto;">at most</strong> <code style="user-select: auto;">steps</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">string forward(int steps)</code>&nbsp;Move <code style="user-select: auto;">steps</code> forward in history. If you can only forward <code style="user-select: auto;">x</code> steps in the history and <code style="user-select: auto;">steps &gt; x</code>, you will&nbsp;forward only&nbsp;<code style="user-select: auto;">x</code> steps. Return the current <code style="user-select: auto;">url</code>&nbsp;after forwarding in history <strong style="user-select: auto;">at most</strong> <code style="user-select: auto;">steps</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example:</strong></p>

<pre style="position: relative; user-select: auto;"><b style="user-select: auto;">Input:</b>
["BrowserHistory","visit","visit","visit","back","back","forward","visit","forward","back","back"]
[["leetcode.com"],["google.com"],["facebook.com"],["youtube.com"],[1],[1],[1],["linkedin.com"],[2],[2],[7]]
<b style="user-select: auto;">Output:</b>
[null,null,null,null,"facebook.com","google.com","facebook.com",null,"linkedin.com","google.com","leetcode.com"]

<b style="user-select: auto;">Explanation:</b>
BrowserHistory browserHistory = new BrowserHistory("leetcode.com");
browserHistory.visit("google.com");       // You are in "leetcode.com". Visit "google.com"
browserHistory.visit("facebook.com");     // You are in "google.com". Visit "facebook.com"
browserHistory.visit("youtube.com");      // You are in "facebook.com". Visit "youtube.com"
browserHistory.back(1);                   // You are in "youtube.com", move back to "facebook.com" return "facebook.com"
browserHistory.back(1);                   // You are in "facebook.com", move back to "google.com" return "google.com"
browserHistory.forward(1);                // You are in "google.com", move forward to "facebook.com" return "facebook.com"
browserHistory.visit("linkedin.com");     // You are in "facebook.com". Visit "linkedin.com"
browserHistory.forward(2);                // You are in "linkedin.com", you cannot move forward any steps.
browserHistory.back(2);                   // You are in "linkedin.com", move back two steps to "facebook.com" then to "google.com". return "google.com"
browserHistory.back(7);                   // You are in "google.com", you can move back only one step to "leetcode.com". return "leetcode.com"
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= homepage.length &lt;= 20</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= url.length &lt;= 20</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= steps &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">homepage</code> and <code style="user-select: auto;">url</code> consist of&nbsp; '.' or lower case English letters.</li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">5000</code>&nbsp;calls will be made to <code style="user-select: auto;">visit</code>, <code style="user-select: auto;">back</code>, and <code style="user-select: auto;">forward</code>.</li>
</ul>
</div>