class Solution {
public:
    /**
     * @param str: a string
     * @param offset: an integer
     * @return: nothing
     */
    void rotateString(string &str,int offset){
        //wirte your code here
        
        if(str.size() == 0 || str.empty())
            return ;
            
        int offset_temp;
        offset_temp = offset % str.size();
        /* 
        string str_temp = "";
        if (offset_temp!=0)
        {
            str_temp = str.substr(str.size()-offset_temp,offset_temp) + str.substr(0,str.size()-offset_temp);
            str = str_temp;
        }
        */
        int length = str.size();
        if (offset_temp!=0)
        {
            reverse(str,0,length-1-offset_temp);
            reverse(str,length-offset_temp,length-1);
            reverse(str,0,length-1);
        }
    }
    
    void reverse(string &str,int begin,int end)
    {
        while (begin < end)
        {
            char temp = str[begin];
            str[begin] = str[end];
            str[end] = temp;
            begin ++;
            end --;
        }
    }
};
