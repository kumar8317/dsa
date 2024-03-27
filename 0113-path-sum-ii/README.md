<h2><a href="https://leetcode.com/problems/path-sum-ii/">113. Path Sum II</a></h2><h3>Medium</h3><hr><div element-id="992"><p element-id="991">Given the <code element-id="990">root</code> of a binary tree and an integer <code element-id="989">targetSum</code>, return <em element-id="988">all <strong element-id="987">root-to-leaf</strong> paths where the sum of the node values in the path equals </em><code element-id="986">targetSum</code><em element-id="985">. Each path should be returned as a list of the node <strong element-id="984">values</strong>, not node references</em>.</p>

<p element-id="983">A <strong element-id="982">root-to-leaf</strong> path is a path starting from the root and ending at any leaf node. A <strong element-id="981">leaf</strong> is a node with no children.</p>

<p element-id="980">&nbsp;</p>
<p element-id="979"><strong class="example" element-id="978">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/18/pathsumii1.jpg" style="width: 500px; height: 356px;" element-id="977">
<pre element-id="976"><strong element-id="975">Input:</strong> root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22
<strong element-id="974">Output:</strong> [[5,4,11,2],[5,8,4,5]]
<strong element-id="973">Explanation:</strong> There are two paths whose sum equals targetSum:
5 + 4 + 11 + 2 = 22
5 + 8 + 4 + 5 = 22
</pre>

<p element-id="972"><strong class="example" element-id="971">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/18/pathsum2.jpg" style="width: 212px; height: 181px;" element-id="970">
<pre element-id="969"><strong element-id="968">Input:</strong> root = [1,2,3], targetSum = 5
<strong element-id="967">Output:</strong> []
</pre>

<p element-id="966"><strong class="example" element-id="965">Example 3:</strong></p>

<pre element-id="964"><strong element-id="963">Input:</strong> root = [1,2], targetSum = 0
<strong element-id="962">Output:</strong> []
</pre>

<p element-id="961">&nbsp;</p>
<p element-id="960"><strong element-id="959">Constraints:</strong></p>

<ul element-id="958">
	<li element-id="957">The number of nodes in the tree is in the range <code element-id="956">[0, 5000]</code>.</li>
	<li element-id="955"><code element-id="954">-1000 &lt;= Node.val &lt;= 1000</code></li>
	<li element-id="953"><code element-id="952">-1000 &lt;= targetSum &lt;= 1000</code></li>
</ul>
</div>