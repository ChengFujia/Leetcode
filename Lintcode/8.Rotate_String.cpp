class Solution {
public:
    /**
     * @param str: a string
     * @param offset: an integer
     * @return: nothing
     */
    void rotateString(string &str,int offset){
        //wirte your code here
        int offset_temp;
        string str_temp = "";
        if(str.size() != 0 && !str.empty())
            offset_temp = offset % str.size();
            
        if (offset_temp!=0)
        {
            str_temp = str.substr(str.size()-offset_temp,offset_temp) + str.substr(0,str.size()-offset_temp);
            str = str_temp;
        }
    }
};
