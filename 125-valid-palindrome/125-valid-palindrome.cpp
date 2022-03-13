class Solution {
public:
    bool isPalindrome(string s) {
        string v="";
        int size=s.length();
        for(int i=0;i<size;i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]+=32;
                v+=s[i];
            }
            else if(s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9')
            {
                v+=s[i];
            }
        }
        int n=v.length();
        int start=0,e=n-1;
        while(start<=e)
        {
            if(v[start]!=v[e])
            {
                return 0;
            }else{
                start++;
                e--;
            }
        }
        return 1;
        
    }
};