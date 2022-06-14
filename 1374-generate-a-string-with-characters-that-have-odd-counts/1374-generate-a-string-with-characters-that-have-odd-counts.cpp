class Solution {
public:
    string generateTheString(int n) {
        string str="";
        
        if(n%2)
        {
            while(n--)
            {
            str+='a';
            }
        }
        else{
            n--;
            while(n--)
            {
                str+='a';
            }
            str+='b';
        }
        return str;
    }
};