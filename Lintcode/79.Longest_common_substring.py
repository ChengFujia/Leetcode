class Solution:
    # @param A, B: Two string.
    # @return: the length of the longest common substring.
    def longestCommonSubstring(self, A, B):
        # write your code here
        '''
        if len(A)==0 or len(B)==0:
            return 0
            
        sub_a = []
        for i in range(len(A)):
            if i == 0:
                for index in range(len(A)):
                    sub_a.append(A[index])
            else:
                for start in range(len(A)-i):
                    tempstring = ''
                    for j in range(start,start+i+1):
                        tempstring += A[j]
                    sub_a.append(tempstring)
                    
        for item in sub_a[::-1]:
            if item in B:
                return len(item)
        '''
        
        ans = 0
        
        for i in xrange(len(A)):
            for j in xrange(len(B)):
                l = 0
                while i + l < len(A) and j + l < len(B) and A[i + l] == B[j + l]:
                    l += 1
                if l > ans:
                    ans = l
        return ans
                