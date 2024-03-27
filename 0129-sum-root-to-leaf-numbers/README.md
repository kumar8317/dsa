<h2><a href="https://leetcode.com/problems/sum-root-to-leaf-numbers/">129. Sum Root to Leaf Numbers</a></h2><h3>Medium</h3><hr><div element-id="1215"><p element-id="1214">You are given the <code element-id="1213">root</code> of a binary tree containing digits from <code element-id="1212">0</code> to <code element-id="1211">9</code> only.</p>

<p element-id="1210">Each root-to-leaf path in the tree represents a number.</p>

<ul element-id="1209">
	<li element-id="1208">For example, the root-to-leaf path <code element-id="1207">1 -&gt; 2 -&gt; 3</code> represents the number <code element-id="1206">123</code>.</li>
</ul>

<p element-id="1205">Return <em element-id="1204">the total sum of all root-to-leaf numbers</em>. Test cases are generated so that the answer will fit in a <strong element-id="1203">32-bit</strong> integer.</p>

<p element-id="1202">A <strong element-id="1201">leaf</strong> node is a node with no children.</p>

<p element-id="1200">&nbsp;</p>
<p element-id="1199"><strong class="example" element-id="1198">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/19/num1tree.jpg" style="width: 212px; height: 182px;" element-id="1197">
<pre element-id="1196"><strong element-id="1195">Input:</strong> root = [1,2,3]
<strong element-id="1194">Output:</strong> 25
<strong element-id="1193">Explanation:</strong>
The root-to-leaf path <code element-id="1192">1-&gt;2</code> represents the number <code element-id="1191">12</code>.
The root-to-leaf path <code element-id="1190">1-&gt;3</code> represents the number <code element-id="1189">13</code>.
Therefore, sum = 12 + 13 = <code element-id="1188">25</code>.
</pre>

<p element-id="1187"><strong class="example" element-id="1186">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/19/num2tree.jpg" style="width: 292px; height: 302px;" element-id="1185">
<pre element-id="1184"><strong element-id="1183">Input:</strong> root = [4,9,0,5,1]
<strong element-id="1182">Output:</strong> 1026
<strong element-id="1181">Explanation:</strong>
The root-to-leaf path <code element-id="1180">4-&gt;9-&gt;5</code> represents the number 495.
The root-to-leaf path <code element-id="1179">4-&gt;9-&gt;1</code> represents the number 491.
The root-to-leaf path <code element-id="1178">4-&gt;0</code> represents the number 40.
Therefore, sum = 495 + 491 + 40 = <code element-id="1177">1026</code>.
</pre>

<p element-id="1176">&nbsp;</p>
<p element-id="1175"><strong element-id="1174">Constraints:</strong></p>

<ul element-id="1173">
	<li element-id="1172">The number of nodes in the tree is in the range <code element-id="1171">[1, 1000]</code>.</li>
	<li element-id="1170"><code element-id="1169">0 &lt;= Node.val &lt;= 9</code></li>
	<li element-id="1168">The depth of the tree will not exceed <code element-id="1167">10</code>.</li>
</ul>
</div>