class Solution {
public:
    /**
     * @param s: The first string
     * @param b: The second string
     * @return true or false
     */
    bool anagram(string s, string t) {
        // write your code here
        if (s.size() != t.size())
            return false;
		/*
		// 256是考虑大小写 空白等所有的ascii字符
        int letterCount[256] = {0};
		// 方法一：hashmap统计字频（遍历两个字符串，统计各字符出现的频次）
        for (int i = 0; i < s.size(); i++) {
            letterCount[s[i]] += 1;
            letterCount[t[i]] -= 1;
        }
        for (int j = 0; j < 256; j++) {
            if (letterCount[j] != 0)
                return false;
        }
        return true;
		*/
		
		// 方法二：分别排序后，看字符串是否相等即可
		sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t)
            return true;
        else
            return false;
    }
};