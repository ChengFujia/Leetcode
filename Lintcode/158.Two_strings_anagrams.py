class Solution:
    """
    @param s: The first string
    @param b: The second string
    @return true or false
    """
    def anagram(self, s, t):
        # write your code here
		'''
		# 方法一：hashmap统计字频（遍历两个字符串，统计各字符出现的频次）
        return collections.Counter(s)==collections.Counter(t)
		'''
		# 方法二：分别排序后，看字符串是否相等即可
		return sorted(s) == sorted(t)