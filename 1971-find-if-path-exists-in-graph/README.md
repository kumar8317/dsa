<h2><a href="https://leetcode.com/problems/find-if-path-exists-in-graph/">1971. Find if Path Exists in Graph</a></h2><h3>Easy</h3><hr><div element-id="883"><p element-id="882">There is a <strong element-id="881">bi-directional</strong> graph with <code element-id="880">n</code> vertices, where each vertex is labeled from <code element-id="879">0</code> to <code element-id="878">n - 1</code> (<strong element-id="877">inclusive</strong>). The edges in the graph are represented as a 2D integer array <code element-id="876">edges</code>, where each <code element-id="875">edges[i] = [u<sub element-id="874">i</sub>, v<sub element-id="873">i</sub>]</code> denotes a bi-directional edge between vertex <code element-id="872">u<sub element-id="871">i</sub></code> and vertex <code element-id="870">v<sub element-id="869">i</sub></code>. Every vertex pair is connected by <strong element-id="868">at most one</strong> edge, and no vertex has an edge to itself.</p>

<p element-id="867">You want to determine if there is a <strong element-id="866">valid path</strong> that exists from vertex <code element-id="865">source</code> to vertex <code element-id="864">destination</code>.</p>

<p element-id="863">Given <code element-id="862">edges</code> and the integers <code element-id="861">n</code>, <code element-id="860">source</code>, and <code element-id="859">destination</code>, return <code element-id="858">true</code><em element-id="857"> if there is a <strong element-id="856">valid path</strong> from </em><code element-id="855">source</code><em element-id="854"> to </em><code element-id="853">destination</code><em element-id="852">, or </em><code element-id="851">false</code><em element-id="850"> otherwise</em><em element-id="849">.</em></p>

<p element-id="848">&nbsp;</p>
<p element-id="847"><strong class="example" element-id="846">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/08/14/validpath-ex1.png" style="width: 141px; height: 121px;" element-id="845">
<pre element-id="844"><strong element-id="843">Input:</strong> n = 3, edges = [[0,1],[1,2],[2,0]], source = 0, destination = 2
<strong element-id="842">Output:</strong> true
<strong element-id="841">Explanation:</strong> There are two paths from vertex 0 to vertex 2:
- 0 → 1 → 2
- 0 → 2
</pre>

<p element-id="840"><strong class="example" element-id="839">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/08/14/validpath-ex2.png" style="width: 281px; height: 141px;" element-id="838">
<pre element-id="837"><strong element-id="836">Input:</strong> n = 6, edges = [[0,1],[0,2],[3,5],[5,4],[4,3]], source = 0, destination = 5
<strong element-id="835">Output:</strong> false
<strong element-id="834">Explanation:</strong> There is no path from vertex 0 to vertex 5.
</pre>

<p element-id="833">&nbsp;</p>
<p element-id="832"><strong element-id="831">Constraints:</strong></p>

<ul element-id="830">
	<li element-id="829"><code element-id="828">1 &lt;= n &lt;= 2 * 10<sup element-id="827">5</sup></code></li>
	<li element-id="826"><code element-id="825">0 &lt;= edges.length &lt;= 2 * 10<sup element-id="824">5</sup></code></li>
	<li element-id="823"><code element-id="822">edges[i].length == 2</code></li>
	<li element-id="821"><code element-id="820">0 &lt;= u<sub element-id="819">i</sub>, v<sub element-id="818">i</sub> &lt;= n - 1</code></li>
	<li element-id="817"><code element-id="816">u<sub element-id="815">i</sub> != v<sub element-id="814">i</sub></code></li>
	<li element-id="813"><code element-id="812">0 &lt;= source, destination &lt;= n - 1</code></li>
	<li element-id="811">There are no duplicate edges.</li>
	<li element-id="810">There are no self edges.</li>
</ul>
</div>