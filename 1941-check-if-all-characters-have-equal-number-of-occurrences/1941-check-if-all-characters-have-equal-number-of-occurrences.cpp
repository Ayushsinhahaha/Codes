class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        int cnt=m[s[0]];
        for(auto &it:m)
        {
            if(cnt!=it.second)
                return false;
        }return true;
        
    }
};