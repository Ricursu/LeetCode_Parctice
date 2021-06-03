##### 解题思路：

​	这题还是一个前缀和的题，一开始是往前缀整除2验证是否和长度相同，看了题解发现=_=。

​	这题还是和523的题类似，通过前缀和的结果如果在map中存在，那么说明当前位置到上一个结果的位置是一个均等01的数组。因此，只需要将不存在的key添加进哈希表，然后通过key判断是否已经存在结果即可。

​	https://leetcode-cn.com/problems/contiguous-array/solution/525-lian-xu-shu-zu-guan-fang-ti-jie-de-z-awfe/这个题解写的挺好的，可以结合着看。