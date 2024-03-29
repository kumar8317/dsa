<h2><a href="https://leetcode.com/problems/flood-fill/">733. Flood Fill</a></h2><h3>Easy</h3><hr><div element-id="894"><p element-id="893">An image is represented by an <code element-id="892">m x n</code> integer grid <code element-id="891">image</code> where <code element-id="890">image[i][j]</code> represents the pixel value of the image.</p>

<p element-id="889">You are also given three integers <code element-id="888">sr</code>, <code element-id="887">sc</code>, and <code element-id="886">color</code>. You should perform a <strong element-id="885">flood fill</strong> on the image starting from the pixel <code element-id="884">image[sr][sc]</code>.</p>

<p element-id="883">To perform a <strong element-id="882">flood fill</strong>, consider the starting pixel, plus any pixels connected <strong element-id="881">4-directionally</strong> to the starting pixel of the same color as the starting pixel, plus any pixels connected <strong element-id="880">4-directionally</strong> to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with <code element-id="879">color</code>.</p>

<p element-id="878">Return <em element-id="877">the modified image after performing the flood fill</em>.</p>

<p element-id="876">&nbsp;</p>
<p element-id="875"><strong class="example" element-id="874">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/06/01/flood1-grid.jpg" style="width: 613px; height: 253px;" element-id="873">
<pre element-id="872"><strong element-id="871">Input:</strong> image = [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, color = 2
<strong element-id="870">Output:</strong> [[2,2,2],[2,2,0],[2,0,1]]
<strong element-id="869">Explanation:</strong> From the center of the image with position (sr, sc) = (1, 1) (i.e., the red pixel), all pixels connected by a path of the same color as the starting pixel (i.e., the blue pixels) are colored with the new color.
Note the bottom corner is not colored 2, because it is not 4-directionally connected to the starting pixel.
</pre>

<p element-id="868"><strong class="example" element-id="867">Example 2:</strong></p>

<pre element-id="866"><strong element-id="865">Input:</strong> image = [[0,0,0],[0,0,0]], sr = 0, sc = 0, color = 0
<strong element-id="864">Output:</strong> [[0,0,0],[0,0,0]]
<strong element-id="863">Explanation:</strong> The starting pixel is already colored 0, so no changes are made to the image.
</pre>

<p element-id="862">&nbsp;</p>
<p element-id="861"><strong element-id="860">Constraints:</strong></p>

<ul element-id="859">
	<li element-id="858"><code element-id="857">m == image.length</code></li>
	<li element-id="856"><code element-id="855">n == image[i].length</code></li>
	<li element-id="854"><code element-id="853">1 &lt;= m, n &lt;= 50</code></li>
	<li element-id="852"><code element-id="851">0 &lt;= image[i][j], color &lt; 2<sup element-id="850">16</sup></code></li>
	<li element-id="849"><code element-id="848">0 &lt;= sr &lt; m</code></li>
	<li element-id="847"><code element-id="846">0 &lt;= sc &lt; n</code></li>
</ul>
</div>