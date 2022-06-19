class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty())
        return 0;
    
    int l=needle.size();
    for(int i=0;i<haystack.size();i++)
    {
       string st=haystack.substr(i,l); 
        if(st==needle)
            return i;
    }
    return -1;   
    }
};