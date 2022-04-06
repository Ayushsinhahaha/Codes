class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
       string v1="";
        string v2="";
        for(int i=0;i<word1.size();i++)
        {
            v1+=word1[i];
        }
        for(int i=0;i<word2.size();i++)
        {
            v2+=word2[i];
        }
        if(v1==v2)
        return true;
        else
        return false;
    }
};