##### 解题思路：

​	1、动态规划，考虑当前的数值加上之前计算的序列和是否会变大，如果变大，那就刷新序列和，否则以当前的节点为起点重新计算序列和。每次的序列和计算完后，和之前计算的最大结果在进行比较，即可不保证获取的每个序列和都能够被判断是否为最终的结果。