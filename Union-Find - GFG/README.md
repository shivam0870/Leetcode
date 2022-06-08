# Union-Find
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">This problem is to implement disjoint set union. There will be 2 incomplete functions namely union and find. You have to complete these functions.&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Union:</strong> Join two subsets into a single set.<br style="user-select: auto;">
<strong style="user-select: auto;">isConnected:</strong> Determine which subset a particular element is in. This can be used for determining if two elements are in same subset.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 5
q = 4
Queries = 
Union(1,3)
isConnected(1,2)
Union(1,5)
isConnected(3,5)
<strong style="user-select: auto;">Output:
</strong>0
1<strong style="user-select: auto;">
Explanation: </strong>Initially all nodes 1 2 3 4 5
are not connected.&nbsp;
After <strong style="user-select: auto;">Union(1,3)</strong>, node 1 and 3 will be
connected.
When we do <strong style="user-select: auto;">isConnected(</strong><strong style="user-select: auto;">1,2)</strong>,&nbsp; as node 1
and 2&nbsp;are not connected it will return 0.
After <strong style="user-select: auto;">Union(1,5)</strong>, node 1 and 5&nbsp;will be
connected.
When we do <strong style="user-select: auto;">isConnected(3,5</strong><strong style="user-select: auto;">)</strong>,&nbsp; as node
1 and 3&nbsp;are&nbsp;connected, and node 1 and 5
are connected, hence 3 and 5 are
connected.&nbsp;Thus it will return 1.</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 5
q = 4
Queries = 
Union(1,4)
Union(1,5)
isConnected(2,3)
Union(3,4)
<strong style="user-select: auto;">Output: </strong>0</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You have to complete the function <strong style="user-select: auto;">union_() </strong>which merges the node1 and node2. You will also have to complete the function <strong style="user-select: auto;">isConnected() </strong>which will return whether the two nodes are connected.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Note:&nbsp;</span></strong><span style="font-size: 18px; user-select: auto;">Both function will contain two arrays&nbsp;<strong style="user-select: auto;">par[] and ranks1[]&nbsp;</strong>along with two nodes. Initially&nbsp;<strong style="user-select: auto;">par[i] = i </strong>and <strong style="user-select: auto;">rank1[i] = 1&nbsp;</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N + Q).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:&nbsp;</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1&lt;= Q &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= node1, node2 &lt;= N</span></p>
 <p style="user-select: auto;"></p>
            </div>