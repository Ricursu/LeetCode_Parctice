##### 解题思路：

​	根据题意“使每个节点 node 的新值等于原树中大于或等于 node.val 的值之和”，因此，可以知道需要递减的访问每个节点，并将每个访问过的节点累加起来。因此只要按照右子树、节点、左子树的方式访问，即是递减的访问搜索二叉树。