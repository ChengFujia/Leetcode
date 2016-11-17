class Solution {
public:    
    /**
     * @param A, B: Two string.
     * @return: the length of the longest common substring.
     */
    int longestCommonSubstring(string &A, string &B) {
        // write your code here
        /*
        int maxlen = 0;
        int xlen = A.size();
        int ylen = B.size();
        for (int i=0;i<xlen;i++)
        {
            for(int j=0;j<ylen;j++)
            {
                int temp = 0;
                while(A[i+temp]==B[j+temp] and (i+temp<xlen) and (j+temp<ylen))
                    temp += 1;
                if (temp > maxlen)
                    maxlen = temp;
            }
        }
        return maxlen;
        */
        
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
                {
                    string temp = "";
                    temp += A[index];
                    sub_A.push_back(temp);
                }
            }
        }
        
        for (int index=sub_A.size()-1;index>=0;index--)
        {
            if(B.find(sub_A[index])<B.size())
                return sub_A[index].size();
        }
    }
};