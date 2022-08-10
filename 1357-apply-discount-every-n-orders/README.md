<h2><a href="https://leetcode.com/problems/apply-discount-every-n-orders/">1357. Apply Discount Every n Orders</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is a supermarket that is frequented by many customers. The products sold at the supermarket are represented as two parallel integer arrays <code style="user-select: auto;">products</code> and <code style="user-select: auto;">prices</code>, where the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> product has an ID of <code style="user-select: auto;">products[i]</code> and a price of <code style="user-select: auto;">prices[i]</code>.</p>

<p style="user-select: auto;">When a customer is paying, their bill is represented as two parallel integer arrays <code style="user-select: auto;">product</code> and <code style="user-select: auto;">amount</code>, where the <code style="user-select: auto;">j<sup style="user-select: auto;">th</sup></code> product they purchased has an ID of <code style="user-select: auto;">product[j]</code>, and <code style="user-select: auto;">amount[j]</code> is how much of the product they bought. Their subtotal is calculated as the sum of each <code style="user-select: auto;">amount[j] * (price of the j<sup style="user-select: auto;">th</sup> product)</code>.</p>

<p style="user-select: auto;">The supermarket decided to have a sale. Every <code style="user-select: auto;">n<sup style="user-select: auto;">th</sup></code> customer paying for their groceries will be given a <strong style="user-select: auto;">percentage discount</strong>. The discount amount is given by <code style="user-select: auto;">discount</code>, where they will be given <code style="user-select: auto;">discount</code> percent off their subtotal. More formally, if their subtotal is <code style="user-select: auto;">bill</code>, then they would actually pay <code style="user-select: auto;">bill * ((100 - discount) / 100)</code>.</p>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">Cashier</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">Cashier(int n, int discount, int[] products, int[] prices)</code> Initializes the object with <code style="user-select: auto;">n</code>, the <code style="user-select: auto;">discount</code>, and the <code style="user-select: auto;">products</code> and their <code style="user-select: auto;">prices</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">double getBill(int[] product, int[] amount)</code> Returns the final total of the bill with the discount applied (if any). Answers within <code style="user-select: auto;">10<sup style="user-select: auto;">-5</sup></code> of the actual value will be accepted.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input</strong>
["Cashier","getBill","getBill","getBill","getBill","getBill","getBill","getBill"]
[[3,50,[1,2,3,4,5,6,7],[100,200,300,400,300,200,100]],[[1,2],[1,2]],[[3,7],[10,10]],[[1,2,3,4,5,6,7],[1,1,1,1,1,1,1]],[[4],[10]],[[7,3],[10,10]],[[7,5,3,1,6,4,2],[10,10,10,9,9,9,7]],[[2,3,5],[5,3,2]]]
<strong style="user-select: auto;">Output</strong>
[null,500.0,4000.0,800.0,4000.0,4000.0,7350.0,2500.0]
<strong style="user-select: auto;">Explanation</strong>
Cashier cashier = new Cashier(3,50,[1,2,3,4,5,6,7],[100,200,300,400,300,200,100]);
cashier.getBill([1,2],[1,2]);                        // return 500.0. 1<sup style="user-select: auto;">st</sup> customer, no discount.
                                                     // bill = 1 * 100 + 2 * 200 = 500.
cashier.getBill([3,7],[10,10]);                      // return 4000.0. 2<sup style="user-select: auto;">nd</sup> customer, no discount.
                                                     // bill = 10 * 300 + 10 * 100 = 4000.
cashier.getBill([1,2,3,4,5,6,7],[1,1,1,1,1,1,1]);    // return 800.0. 3<sup style="user-select: auto;">rd</sup> customer, 50% discount.
                                                     // Original bill = 1600
                                                     // Actual bill = 1600 * ((100 - 50) / 100) = 800.
cashier.getBill([4],[10]);                           // return 4000.0. 4<sup style="user-select: auto;">th</sup> customer, no discount.
cashier.getBill([7,3],[10,10]);                      // return 4000.0. 5<sup style="user-select: auto;">th</sup> customer, no discount.
cashier.getBill([7,5,3,1,6,4,2],[10,10,10,9,9,9,7]); // return 7350.0. 6<sup style="user-select: auto;">th</sup> customer, 50% discount.
                                                     // Original bill = 14700, but with
                                                     // Actual bill = 14700 * ((100 - 50) / 100) = 7350.
cashier.getBill([2,3,5],[5,3,2]);                    // return 2500.0.  6<sup style="user-select: auto;">th</sup> customer, no discount.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= discount &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= products.length &lt;= 200</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">prices.length == products.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= products[i] &lt;= 200</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= prices[i] &lt;= 1000</code></li>
	<li style="user-select: auto;">The elements in <code style="user-select: auto;">products</code> are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= product.length &lt;= products.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">amount.length == product.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">product[j]</code> exists in <code style="user-select: auto;">products</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= amount[j] &lt;= 1000</code></li>
	<li style="user-select: auto;">The elements of <code style="user-select: auto;">product</code> are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">1000</code> calls will be made to <code style="user-select: auto;">getBill</code>.</li>
	<li style="user-select: auto;">Answers within <code style="user-select: auto;">10<sup style="user-select: auto;">-5</sup></code> of the actual value will be accepted.</li>
</ul>
</div>