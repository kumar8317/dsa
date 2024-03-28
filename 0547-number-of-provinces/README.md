<h2><a href="https://leetcode.com/problems/number-of-provinces/">547. Number of Provinces</a></h2><h3>Medium</h3><hr><div element-id="1143"><p element-id="1142">There are <code element-id="1141">n</code> cities. Some of them are connected, while some are not. If city <code element-id="1140">a</code> is connected directly with city <code element-id="1139">b</code>, and city <code element-id="1138">b</code> is connected directly with city <code element-id="1137">c</code>, then city <code element-id="1136">a</code> is connected indirectly with city <code element-id="1135">c</code>.</p>

<p element-id="1134">A <strong element-id="1133">province</strong> is a group of directly or indirectly connected cities and no other cities outside of the group.</p>

<p element-id="1132">You are given an <code element-id="1131">n x n</code> matrix <code element-id="1130">isConnected</code> where <code element-id="1129">isConnected[i][j] = 1</code> if the <code element-id="1128">i<sup element-id="1127">th</sup></code> city and the <code element-id="1126">j<sup element-id="1125">th</sup></code> city are directly connected, and <code element-id="1124">isConnected[i][j] = 0</code> otherwise.</p>

<p element-id="1123">Return <em element-id="1122">the total number of <strong element-id="1121">provinces</strong></em>.</p>

<p element-id="1120">&nbsp;</p>
<p element-id="1119"><strong class="example" element-id="1118">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/12/24/graph1.jpg" style="width: 222px; height: 142px;" element-id="1117">
<pre element-id="1116"><strong element-id="1115">Input:</strong> isConnected = [[1,1,0],[1,1,0],[0,0,1]]
<strong element-id="1114">Output:</strong> 2
</pre>

<p element-id="1113"><strong class="example" element-id="1112">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/12/24/graph2.jpg" style="width: 222px; height: 142px;" element-id="1111">
<pre element-id="1110"><strong element-id="1109">Input:</strong> isConnected = [[1,0,0],[0,1,0],[0,0,1]]
<strong element-id="1108">Output:</strong> 3
</pre>

<p element-id="1107">&nbsp;</p>
<p element-id="1106"><strong element-id="1105">Constraints:</strong></p>

<ul element-id="1104">
	<li element-id="1103"><code element-id="1102">1 &lt;= n &lt;= 200</code></li>
	<li element-id="1101"><code element-id="1100">n == isConnected.length</code></li>
	<li element-id="1099"><code element-id="1098">n == isConnected[i].length</code></li>
	<li element-id="1097"><code element-id="1096">isConnected[i][j]</code> is <code element-id="1095">1</code> or <code element-id="1094">0</code>.</li>
	<li element-id="1093"><code element-id="1092">isConnected[i][i] == 1</code></li>
	<li element-id="1091"><code element-id="1090">isConnected[i][j] == isConnected[j][i]</code></li>
</ul>
</div>