class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        map<string,vector<string>> hash;
        vector<vector<string>> result;
        sort(strs.begin(),strs.end());
        for (int i=0;i<strs.size();i++)
        {
            string str = strs[i];
            sort(str.begin(),str.end());
            hash[str].push_back(strs[i]);
        }
        
        for (map<string,vector<string>>::iterator iter=hash.begin();iter != hash.end();iter++)
        {
            result.push_back(iter->second);
        }
        return result;
    }
};