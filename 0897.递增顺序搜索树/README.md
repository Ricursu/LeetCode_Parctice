##### 解题思路：

​	1、中序遍历，把遍历的值存储起来，然后再遍历值，创建新的树

​	2、和平衡二叉树的旋转有点像，把左子节点移到根节点，然后根节点移到左子节点的右节点，遍历一次就好了。