class Solution {
public:
    bool checkString(string s) {
       
        for(int i=0;i<s.size();i++)
        {
            for(int j=i+1;j<s.size();j++)
            {
                if(s[i]>s[j])
                    return 0;
            }
        }
        return 1;
    }
};