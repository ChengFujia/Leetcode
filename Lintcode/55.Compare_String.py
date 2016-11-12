class Solution:
    """
    @param A : A string includes Upper Case letters
    @param B : A string includes Upper Case letters
    @return :  if string A contains all of the characters in B return True else return False
    """
    def compareStrings(self, A, B):
        # write your code here
        # 返回一个字典（默认值均为0）
        letters = collections.defaultdict(int)
        for a in A:
            letters[a] += 1
        for b in B:
            if b not in letters:
                return False
            else:
                letters[b] -= 1
                if letters[b] <0:
                    return False
        return True