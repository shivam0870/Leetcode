<h2><a href="https://leetcode.com/problems/unique-email-addresses/">929. Unique Email Addresses</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Every <strong style="user-select: auto;">valid email</strong> consists of a <strong style="user-select: auto;">local name</strong> and a <strong style="user-select: auto;">domain name</strong>, separated by the <code style="user-select: auto;">'@'</code> sign. Besides lowercase letters, the email may contain one or more <code style="user-select: auto;">'.'</code> or <code style="user-select: auto;">'+'</code>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, in <code style="user-select: auto;">"alice@leetcode.com"</code>, <code style="user-select: auto;">"alice"</code> is the <strong style="user-select: auto;">local name</strong>, and <code style="user-select: auto;">"leetcode.com"</code> is the <strong style="user-select: auto;">domain name</strong>.</li>
</ul>

<p style="user-select: auto;">If you add periods <code style="user-select: auto;">'.'</code> between some characters in the <strong style="user-select: auto;">local name</strong> part of an email address, mail sent there will be forwarded to the same address without dots in the local name. Note that this rule <strong style="user-select: auto;">does not apply</strong> to <strong style="user-select: auto;">domain names</strong>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, <code style="user-select: auto;">"alice.z@leetcode.com"</code> and <code style="user-select: auto;">"alicez@leetcode.com"</code> forward to the same email address.</li>
</ul>

<p style="user-select: auto;">If you add a plus <code style="user-select: auto;">'+'</code> in the <strong style="user-select: auto;">local name</strong>, everything after the first plus sign <strong style="user-select: auto;">will be ignored</strong>. This allows certain emails to be filtered. Note that this rule <strong style="user-select: auto;">does not apply</strong> to <strong style="user-select: auto;">domain names</strong>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, <code style="user-select: auto;">"m.y+name@email.com"</code> will be forwarded to <code style="user-select: auto;">"my@email.com"</code>.</li>
</ul>

<p style="user-select: auto;">It is possible to use both of these rules at the same time.</p>

<p style="user-select: auto;">Given an array of strings <code style="user-select: auto;">emails</code> where we send one email to each <code style="user-select: auto;">emails[i]</code>, return <em style="user-select: auto;">the number of different addresses that actually receive mails</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> emails = ["test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> "testemail@leetcode.com" and "testemail@lee.tcode.com" actually receive mails.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> emails = ["a@leetcode.com","b@leetcode.com","c@leetcode.com"]
<strong style="user-select: auto;">Output:</strong> 3
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= emails.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= emails[i].length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">emails[i]</code> consist of lowercase English letters, <code style="user-select: auto;">'+'</code>, <code style="user-select: auto;">'.'</code> and <code style="user-select: auto;">'@'</code>.</li>
	<li style="user-select: auto;">Each <code style="user-select: auto;">emails[i]</code> contains exactly one <code style="user-select: auto;">'@'</code> character.</li>
	<li style="user-select: auto;">All local and domain names are non-empty.</li>
	<li style="user-select: auto;">Local names do not start with a <code style="user-select: auto;">'+'</code> character.</li>
	<li style="user-select: auto;">Domain names end with the <code style="user-select: auto;">".com"</code> suffix.</li>
</ul>
</div>