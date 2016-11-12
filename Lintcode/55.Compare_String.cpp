class Solution {
public:
    /**
     * @param A: A string includes Upper Case letters
     * @param B: A string includes Upper Case letter
     * @return:  if string A contains all of the characters in B return true 
     *           else return false
     */
    bool compareStrings(string A, string B) {
        // write your code here
        if (A.size() < B.size())
            return false;
        int letters[256] = {0};
        for (int i=0; i<A.size(); i++)
            letters[A[i]] += 1;
        for (int i=0; i<B.size(); i++){
            letters[B[i]] -= 1;
            if (letters[B[i]]<0)
                return false;
        }
        return true;
    }
};