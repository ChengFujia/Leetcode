class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        strDict = {}
        result = []
        for string in strs:
            sortedString = "".join(sorted(string))
            if sortedString not in strDict:
                strDict[sortedString] = [string]
            else:
                strDict[sortedString] += [string]
                
        for item in strDict:
            tmp = strDict[item]
            tmp.sort()
            result += [tmp]

        return result