class Solution:
    # @param s: a list of char
    # @param offset: an integer 
    # @return: nothing
    def rotateString(self, s, offset):
	    # write you code here
	    if s is None or len(s)==0:
	        return
	    
	    offset %= len(s)
	    before = s[:len(s) - offset]
	    after = s[len(s)-offset:]
	    s = before[::-1] + after[::-1]
	    s = s[::-1]