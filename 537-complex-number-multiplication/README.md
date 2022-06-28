<h2><a href="https://leetcode.com/problems/complex-number-multiplication/">537. Complex Number Multiplication</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A <a href="https://en.wikipedia.org/wiki/Complex_number" target="_blank" style="user-select: auto;">complex number</a> can be represented as a string on the form <code style="user-select: auto;">"<strong style="user-select: auto;">real</strong>+<strong style="user-select: auto;">imaginary</strong>i"</code> where:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">real</code> is the real part and is an integer in the range <code style="user-select: auto;">[-100, 100]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">imaginary</code> is the imaginary part and is an integer in the range <code style="user-select: auto;">[-100, 100]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">i<sup style="user-select: auto;">2</sup> == -1</code>.</li>
</ul>

<p style="user-select: auto;">Given two complex numbers <code style="user-select: auto;">num1</code> and <code style="user-select: auto;">num2</code> as strings, return <em style="user-select: auto;">a string of the complex number that represents their multiplications</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num1 = "1+1i", num2 = "1+1i"
<strong style="user-select: auto;">Output:</strong> "0+2i"
<strong style="user-select: auto;">Explanation:</strong> (1 + i) * (1 + i) = 1 + i2 + 2 * i = 2i, and you need convert it to the form of 0+2i.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num1 = "1+-1i", num2 = "1+-1i"
<strong style="user-select: auto;">Output:</strong> "0+-2i"
<strong style="user-select: auto;">Explanation:</strong> (1 - i) * (1 - i) = 1 + i2 - 2 * i = -2i, and you need convert it to the form of 0+-2i.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">num1</code> and <code style="user-select: auto;">num2</code> are valid complex numbers.</li>
</ul>
</div>