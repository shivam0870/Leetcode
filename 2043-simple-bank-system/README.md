<h2><a href="https://leetcode.com/problems/simple-bank-system/">2043. Simple Bank System</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have been tasked with writing a program for a popular bank that will automate all its incoming transactions (transfer, deposit, and withdraw). The bank has <code style="user-select: auto;">n</code> accounts numbered from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">n</code>. The initial balance of each account is stored in a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">balance</code>, with the <code style="user-select: auto;">(i + 1)<sup style="user-select: auto;">th</sup></code> account having an initial balance of <code style="user-select: auto;">balance[i]</code>.</p>

<p style="user-select: auto;">Execute all the <strong style="user-select: auto;">valid</strong> transactions. A transaction is <strong style="user-select: auto;">valid</strong> if:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The given account number(s) are between <code style="user-select: auto;">1</code> and <code style="user-select: auto;">n</code>, and</li>
	<li style="user-select: auto;">The amount of money withdrawn or transferred from is <strong style="user-select: auto;">less than or equal</strong> to the balance of the account.</li>
</ul>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">Bank</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">Bank(long[] balance)</code> Initializes the object with the <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">balance</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">boolean transfer(int account1, int account2, long money)</code> Transfers <code style="user-select: auto;">money</code> dollars from the account numbered <code style="user-select: auto;">account1</code> to the account numbered <code style="user-select: auto;">account2</code>. Return <code style="user-select: auto;">true</code> if the transaction was successful, <code style="user-select: auto;">false</code> otherwise.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">boolean deposit(int account, long money)</code> Deposit <code style="user-select: auto;">money</code> dollars into the account numbered <code style="user-select: auto;">account</code>. Return <code style="user-select: auto;">true</code> if the transaction was successful, <code style="user-select: auto;">false</code> otherwise.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">boolean withdraw(int account, long money)</code> Withdraw <code style="user-select: auto;">money</code> dollars from the account numbered <code style="user-select: auto;">account</code>. Return <code style="user-select: auto;">true</code> if the transaction was successful, <code style="user-select: auto;">false</code> otherwise.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input</strong>
["Bank", "withdraw", "transfer", "deposit", "transfer", "withdraw"]
[[[10, 100, 20, 50, 30]], [3, 10], [5, 1, 20], [5, 20], [3, 4, 15], [10, 50]]
<strong style="user-select: auto;">Output</strong>
[null, true, true, true, false, false]

<strong style="user-select: auto;">Explanation</strong>
Bank bank = new Bank([10, 100, 20, 50, 30]);
bank.withdraw(3, 10);    // return true, account 3 has a balance of $20, so it is valid to withdraw $10.
                         // Account 3 has $20 - $10 = $10.
bank.transfer(5, 1, 20); // return true, account 5 has a balance of $30, so it is valid to transfer $20.
                         // Account 5 has $30 - $20 = $10, and account 1 has $10 + $20 = $30.
bank.deposit(5, 20);     // return true, it is valid to deposit $20 to account 5.
                         // Account 5 has $10 + $20 = $30.
bank.transfer(3, 4, 15); // return false, the current balance of account 3 is $10,
                         // so it is invalid to transfer $15 from it.
bank.withdraw(10, 50);   // return false, it is invalid because account 10 does not exist.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == balance.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n, account, account1, account2 &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= balance[i], money &lt;= 10<sup style="user-select: auto;">12</sup></code></li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">10<sup style="user-select: auto;">4</sup></code> calls will be made to <strong style="user-select: auto;">each</strong> function <code style="user-select: auto;">transfer</code>, <code style="user-select: auto;">deposit</code>, <code style="user-select: auto;">withdraw</code>.</li>
</ul>
</div>