class Solution:
    # @param strs: A list of strings
    # @return: A list of strings
    def anagrams(self, strs):
        # write your code here
        '''
		# 方法一：sort + hashmap
        strDict = {}
        result = []
        for string in strs:
            if "".join(sorted(string)) not in strDict.keys():
                strDict["".join(sorted(string))] = 1
            else:
                strDict["".join(sorted(string))] += 1
        for string in strs:
            if strDict["".join(sorted(string))] >1:
                result.append(string)
        return result
        
        '''
        
		# 方法二：双重循环
        if len(strs) < 2:
            return strs
        result = []
        visited = [False] * len(strs)
        for index1,s1 in enumerate(strs):
            hasAnagrams = False
            for index2,s2 in enumerate(strs):
                if index2 > index1 and not visited[index2] and self.isAnagrams(s1,s2):
                    result.append(s2)
                    visited[index2] = True
                    hasAnagrams = True
            if not visited[index1] and hasAnagrams:
                result.append(s1)
        return result
                
    def isAnagrams(self,str1,str2):
        return sorted(str1) == sorted(str2)