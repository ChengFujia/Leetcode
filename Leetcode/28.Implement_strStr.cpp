class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty())
            return 0;
        else if (haystack.empty())
            return -1;
        
        if (haystack.size() < needle.size())
            return -1;
            
        for(int i=0;i<haystack.size()-needle.size()+1;i++)
        {
            int j;
            for(j=0;j<needle.size();j++)
            {
                if(haystack[i+j]!=needle[j])
                    break;
            }
            if(j==needle.size())
                return i;
        }
        return -1;
    }
};