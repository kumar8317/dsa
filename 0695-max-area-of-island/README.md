<h2><a href="https://leetcode.com/problems/max-area-of-island/">695. Max Area of Island</a></h2><h3>Medium</h3><hr><div element-id="484"><p element-id="483">You are given an <code element-id="482">m x n</code> binary matrix <code element-id="481">grid</code>. An island is a group of <code element-id="480">1</code>'s (representing land) connected <strong element-id="479">4-directionally</strong> (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water.</p>

<p element-id="478">The <strong element-id="477">area</strong> of an island is the number of cells with a value <code element-id="476">1</code> in the island.</p>

<p element-id="475">Return <em element-id="474">the maximum <strong element-id="473">area</strong> of an island in </em><code element-id="472">grid</code>. If there is no island, return <code element-id="471">0</code>.</p>

<p element-id="470">&nbsp;</p>
<p element-id="469"><strong class="example" element-id="468">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/01/maxarea1-grid.jpg" style="width: 500px; height: 310px;" element-id="467">
<pre element-id="466"><strong element-id="465">Input:</strong> grid = [[0,0,1,0,0,0,0,1,0,0,0,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,1,1,0,1,0,0,0,0,0,0,0,0],[0,1,0,0,1,1,0,0,1,0,1,0,0],[0,1,0,0,1,1,0,0,1,1,1,0,0],[0,0,0,0,0,0,0,0,0,0,1,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,0,0,0,0,0,0,1,1,0,0,0,0]]
<strong element-id="464">Output:</strong> 6
<strong element-id="463">Explanation:</strong> The answer is not 11, because the island must be connected 4-directionally.
</pre>

<p element-id="462"><strong class="example" element-id="461">Example 2:</strong></p>

<pre element-id="460"><strong element-id="459">Input:</strong> grid = [[0,0,0,0,0,0,0,0]]
<strong element-id="458">Output:</strong> 0
</pre>

<p element-id="457">&nbsp;</p>
<p element-id="456"><strong element-id="455">Constraints:</strong></p>

<ul element-id="454">
	<li element-id="453"><code element-id="452">m == grid.length</code></li>
	<li element-id="451"><code element-id="450">n == grid[i].length</code></li>
	<li element-id="449"><code element-id="448">1 &lt;= m, n &lt;= 50</code></li>
	<li element-id="447"><code element-id="446">grid[i][j]</code> is either <code element-id="445">0</code> or <code element-id="444">1</code>.</li>
</ul>
</div>