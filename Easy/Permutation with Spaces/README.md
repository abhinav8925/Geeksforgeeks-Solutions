<h2><a href="https://practice.geeksforgeeks.org/problems/permutation-with-spaces3627/1?page=1&difficulty[]=0&status[]=unsolved&category[]=Recursion&sortBy=submissions">Permutation with Spaces</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string you need to print all possible strings that can be made by placing spaces (zero or one) in between them. The output should be printed in <strong>sorted</strong> <strong>increasing</strong> order of strings</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
S = "ABC"
<strong>Output: </strong>(A B C)(A BC)(AB C)(ABC)
<strong>Explanation</strong>:
ABC
AB C
A BC
A B C
These are the possible combination of "ABC".</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
S = "AB"
<strong>Output: </strong>(A B)(AB)
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>permutation()</strong>&nbsp;which takes the string S as input parameters and returns the <strong>sorted array&nbsp;</strong>of the string denoting the different permutation <strong>(DON'T ADD '(' and ')' it will be handled by the driver code only)</strong>.<br>
<br>
<strong>Expected Time Complexity:</strong> O(2^n)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>CONSTRAINTS:</strong><br>
1 &lt;= |S| &lt; 10<br>
S only contains <strong>lowercase and Uppercase English</strong> letters.</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Recursion</code>&nbsp;<code>Backtracking</code>&nbsp;<code>Algorithms</code>&nbsp;