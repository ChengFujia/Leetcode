class Solution {
public:
    /**
     * Returns a index to the first occurrence of target in source,
     * or -1  if target is not part of source.
     * @param source string to be scanned.
     * @param target string containing the sequence of characters to match.
     */
    int strStr(char* haystack, char* needle) 
    {
    if (haystack == NULL || needle == NULL)
        return -1;
    if (strlen(haystack) < strlen(needle))
        return -1;
    for (int i=0; i<strlen(haystack)-strlen(needle)+1; i++)
        {
        int j;
        for (j=0; j<strlen(needle); j++)
            {
            if (haystack[i+j] != needle[j])
                break;
            }
        if (j == strlen(needle))
            return i;
        }
    return -1;
    }
};