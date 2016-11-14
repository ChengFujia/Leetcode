class Solution {
public:    
    /**
     * @param A, B: Two string.
     * @return: the length of the longest common substring.
     */
    int longestCommonSubstring(string &A, string &B) {
        // write your code here
        if (A.empty() || B.empty())
            return 0;
        
        vector<string> sub_A;
        for (int i=0; i<A.size(); i++)
        {
            if (i>0)
            {
                for(int index=0;index<A.size()-i;index++)
                    sub_A.push_back(A.substr(index,i+1));
            }
            else
            {
                for(int index=0;index<A.size();index++)
                    sub_A.push_back(""+A[index]);
            }
        }
        
        for (int index=sub_A.size()-1;index>=0;index--)
        {
            if(B.find(sub_A[index]))
                return sub_A[index].size();
        }
    }
};