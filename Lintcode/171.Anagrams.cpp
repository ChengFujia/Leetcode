class Solution {
public:    
    /**
     * @param strs: A list of strings
     * @return: A list of strings
     */
    vector<string> anagrams(vector<string> &strs) 
    {
        // write your code here
        /*
		//方法一：sort + hashmap
        unordered_map<string,int> hash;
        for(int i=0;i<strs.size();i++)
        {
            string str = strs[i];
            sort(str.begin(), str.end());
            hash[str]++;
        }
        
        vector<string> result;
        for(int j=0;j<strs.size();j++)
        {
            string str = strs[j];
            sort(str.begin(), str.end());
            if (hash[str] > 1)
                result.push_back(strs[j]);
        }
        return result;
        */
		
		//方法二：双重循环
        if (strs.size() < 2)
            return strs;
            
        vector<string> result;
        vector<bool> visited(strs.size(),false);
        for (int s1=0;s1<strs.size();s1++)
        {
            bool hasAnagrams = false;
            for (int s2=s1+1;s2<strs.size();s2++)
            {
                if ((!visited[s2]) && isAnagrams(strs[s1],strs[s2]))
                {
                    hasAnagrams = true;
                    result.push_back(strs[s2]);
                    visited[s2] = true;
                }
            }
            if (!visited[s1] && hasAnagrams)
                result.push_back(strs[s1]);
        }
        return result;
    }
    
private:
    bool isAnagrams(string &s,string &t)
    {
        if (s.size() != t.size())
            return false;
        int letters[26] = {0};
        for (int i =0; i<s.size(); i++)
        {
            letters[s[i]-'a'] += 1;
            letters[t[i]-'a'] -= 1;
        }
        for (int j =0; j<26; j++)
        {
            if (letters[j] != 0)
                return false;
        }
        return true;
    }
};
