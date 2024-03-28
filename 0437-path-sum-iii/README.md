<h2><a href="https://leetcode.com/problems/path-sum-iii/">437. Path Sum III</a></h2><h3>Medium</h3><hr><div element-id="1251"><p element-id="1250">Given the <code element-id="1249">root</code> of a binary tree and an integer <code element-id="1248">targetSum</code>, return <em element-id="1247">the number of paths where the sum of the values&nbsp;along the path equals</em>&nbsp;<code element-id="1246">targetSum</code>.</p>

<p element-id="1245">The path does not need to start or end at the root or a leaf, but it must go downwards (i.e., traveling only from parent nodes to child nodes).</p>

<p element-id="1244">&nbsp;</p>
<p element-id="1243"><strong class="example" element-id="1242">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/04/09/pathsum3-1-tree.jpg" style="width: 450px; height: 386px;" element-id="1241">
<pre element-id="1240"><strong element-id="1239">Input:</strong> root = [10,5,-3,3,2,null,11,3,-2,null,1], targetSum = 8
<strong element-id="1238">Output:</strong> 3
<strong element-id="1237">Explanation:</strong> The paths that sum to 8 are shown.
</pre>

<p element-id="1236"><strong class="example" element-id="1235">Example 2:</strong></p>

<pre element-id="1234"><strong element-id="1233">Input:</strong> root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22
<strong element-id="1232">Output:</strong> 3
</pre>

<p element-id="1231">&nbsp;</p>
<p element-id="1230"><strong element-id="1229">Constraints:</strong></p>

<ul element-id="1228">
	<li element-id="1227">The number of nodes in the tree is in the range <code element-id="1226">[0, 1000]</code>.</li>
	<li element-id="1225"><code element-id="1224">-10<sup element-id="1223">9</sup> &lt;= Node.val &lt;= 10<sup element-id="1222">9</sup></code></li>
	<li element-id="1221"><code element-id="1220">-1000 &lt;= targetSum &lt;= 1000</code></li>
</ul>
</div>