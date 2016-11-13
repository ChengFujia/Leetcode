class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        strDict = {}
        result = []
        for string in strs:
            if "".join(sorted(string)) not in strDict.keys():
                temp_result = []
                temp_result.append(string)
                strDict["".join(sorted(string))] = temp_result
            else:
                strDict["".join(sorted(string))].append(string)
                
        for item in strDict.keys():
            result.append(strDict[item])
        
        return result