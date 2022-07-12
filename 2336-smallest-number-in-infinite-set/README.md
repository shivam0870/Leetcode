<h2><a href="https://leetcode.com/problems/smallest-number-in-infinite-set/">2336. Smallest Number in Infinite Set</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have a set which contains all positive integers <code style="user-select: auto;">[1, 2, 3, 4, 5, ...]</code>.</p>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">SmallestInfiniteSet</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">SmallestInfiniteSet()</code> Initializes the <strong style="user-select: auto;">SmallestInfiniteSet</strong> object to contain <strong style="user-select: auto;">all</strong> positive integers.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int popSmallest()</code> <strong style="user-select: auto;">Removes</strong> and returns the smallest integer contained in the infinite set.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">void addBack(int num)</code> <strong style="user-select: auto;">Adds</strong> a positive integer <code style="user-select: auto;">num</code> back into the infinite set, if it is <strong style="user-select: auto;">not</strong> already in the infinite set.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["SmallestInfiniteSet", "addBack", "popSmallest", "popSmallest", "popSmallest", "addBack", "popSmallest", "popSmallest", "popSmallest"]
[[], [2], [], [], [], [1], [], [], []]
<strong style="user-select: auto;">Output</strong>
[null, null, 1, 2, 3, null, 1, 4, 5]

<strong style="user-select: auto;">Explanation</strong>
SmallestInfiniteSet smallestInfiniteSet = new SmallestInfiniteSet();
smallestInfiniteSet.addBack(2);    // 2 is already in the set, so no change is made.
smallestInfiniteSet.popSmallest(); // return 1, since 1 is the smallest number, and remove it from the set.
smallestInfiniteSet.popSmallest(); // return 2, and remove it from the set.
smallestInfiniteSet.popSmallest(); // return 3, and remove it from the set.
smallestInfiniteSet.addBack(1);    // 1 is added back to the set.
smallestInfiniteSet.popSmallest(); // return 1, since 1 was added back to the set and
                                   // is the smallest number, and remove it from the set.
smallestInfiniteSet.popSmallest(); // return 4, and remove it from the set.
smallestInfiniteSet.popSmallest(); // return 5, and remove it from the set.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= num &lt;= 1000</code></li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">1000</code> calls will be made <strong style="user-select: auto;">in total</strong> to <code style="user-select: auto;">popSmallest</code> and <code style="user-select: auto;">addBack</code>.</li>
</ul>
</div>