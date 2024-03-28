<h2><a href="https://leetcode.com/problems/binary-tree-maximum-path-sum/">124. Binary Tree Maximum Path Sum</a></h2><h3>Hard</h3><hr><div element-id="942"><p element-id="941">A <strong element-id="940">path</strong> in a binary tree is a sequence of nodes where each pair of adjacent nodes in the sequence has an edge connecting them. A node can only appear in the sequence <strong element-id="939">at most once</strong>. Note that the path does not need to pass through the root.</p>

<p element-id="938">The <strong element-id="937">path sum</strong> of a path is the sum of the node's values in the path.</p>

<p element-id="936">Given the <code element-id="935">root</code> of a binary tree, return <em element-id="934">the maximum <strong element-id="933">path sum</strong> of any <strong element-id="932">non-empty</strong> path</em>.</p>

<p element-id="931">&nbsp;</p>
<p element-id="930"><strong class="example" element-id="929">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/13/exx1.jpg" style="width: 322px; height: 182px;" element-id="928">
<pre element-id="927"><strong element-id="926">Input:</strong> root = [1,2,3]
<strong element-id="925">Output:</strong> 6
<strong element-id="924">Explanation:</strong> The optimal path is 2 -&gt; 1 -&gt; 3 with a path sum of 2 + 1 + 3 = 6.
</pre>

<p element-id="923"><strong class="example" element-id="922">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/13/exx2.jpg" element-id="921">
<pre element-id="920"><strong element-id="919">Input:</strong> root = [-10,9,20,null,null,15,7]
<strong element-id="918">Output:</strong> 42
<strong element-id="917">Explanation:</strong> The optimal path is 15 -&gt; 20 -&gt; 7 with a path sum of 15 + 20 + 7 = 42.
</pre>

<p element-id="916">&nbsp;</p>
<p element-id="915"><strong element-id="914">Constraints:</strong></p>

<ul element-id="913">
	<li element-id="912">The number of nodes in the tree is in the range <code element-id="911">[1, 3 * 10<sup element-id="910">4</sup>]</code>.</li>
	<li element-id="909"><code element-id="908">-1000 &lt;= Node.val &lt;= 1000</code></li>
</ul>
</div>