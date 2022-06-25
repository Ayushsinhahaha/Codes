class Solution {
public:
    bool isVowel(char s)
    {
        s=tolower(s);
        if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
            return 1;
        else
            return 0;
    }
    string reverseVowels(string s) {
        int n=s.size();
        int start=0;
        int end=n-1;
        while(start<=end)
        {
            if(isVowel(s[start])&&isVowel(s[end]))
            {
                swap(s[start],s[end]);
                start++;
                end--;
            }else if(isVowel(s[start])!=1)
            {
                start++;
            }else if(isVowel(s[end])!=1)
            {
                end--;
            }
        }
        return s;
    }
};