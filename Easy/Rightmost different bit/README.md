<h2><a href="https://practice.geeksforgeeks.org/problems/rightmost-different-bit-1587115621/1?page=1&difficulty[]=0&status[]=unsolved&sortBy=submissions">Rightmost different bit</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two numbers <strong>M</strong> and <strong>N</strong>. The task is to find the position of the&nbsp;rightmost different bit in the binary representation of numbers.</span></p>

<p><span style="font-size:18px"><strong>Example 1:&nbsp;</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>M = 11, N = 9
<strong>Output:</strong> 2
<strong>Explanation:</strong> Binary representation of the given 
numbers are: 1011 and 1001, 
2nd bit from right is different.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>M = 52, N = 4
<strong>Output</strong>: 5
<strong>Explanation</strong>: Binary representation of the given 
numbers are: 110100 </span><span style="font-size:18px">and 0100, 
5th-bit from right is different.</span>
</pre>

<p><span style="font-size:18px"><strong>User Task:</strong><br>
The task is to complete the function <strong>posOfRightMostDiffBit</strong>() which takes<strong> </strong>two arguments m and n and returns the position of first different bits in m and n.&nbsp;If both m&nbsp;and n&nbsp;are the same then return&nbsp;-1 in this case.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(max(log m, log n)).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
0 &lt;= M &lt;= 10<sup>9</sup><br>
0 &lt;= N &lt;= 10<sup>9</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Bit Magic</code>&nbsp;<code>Data Structures</code>&nbsp;