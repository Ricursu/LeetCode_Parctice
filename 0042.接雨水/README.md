##### 解题思路：

​	维护一个leftmax、rightmax表示left、right左右指针遍历的过程中遇到的最大高度，每个左侧遍历过程中如果当前的高度小于左侧的最大高度，那就存在差值也就是可以蓄水，通过通过右侧去限定右侧的一个高度。

