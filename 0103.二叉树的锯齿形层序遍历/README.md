##### 解题思路：

​	通过栈存储每次需要横向读取的数据，通过队列存储每个读取数据的子节点。利用一个bool值判断读取节点是从左开始还是从右开始。