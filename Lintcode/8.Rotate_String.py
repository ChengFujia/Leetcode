class Solution:
    # @param s: a list of char
    # @param offset: an integer 
    # @return: nothing
    def rotateString(self, s, offset):
	    # write you code here
	    if s is None or len(s)==0:
	        return
	    
	    offset %= len(s)
	    '''
	    #it's meaningless when @param s: a list of char
	    #while it's meaningful when @param s: a string
	    before = s[:len(s) - offset]
	    after = s[len(s)-offset:]
	    s = before[::-1] + after[::-1]
	    s = s[::-1]
	    '''
	    self.reverse(s,0,len(s)-offset-1)
	    self.reverse(s,len(s)-offset,len(s)-1)
	    self.reverse(s,0,len(s)-1)

    def reverse(self,temp,begin,end):
        while begin < end:
            temp[begin],temp[end] = temp[end],temp[begin]
            begin +=1
            end -= 1