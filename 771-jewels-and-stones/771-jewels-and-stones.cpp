class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int fr[256]={};
        for(char x:stones)
        {
            fr[x]++;
        }
        int count=0;
        for(char x:jewels)
        {
            count+=fr[x];
        }
        return count;
    }
};