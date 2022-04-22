class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ans(heights.begin(),heights.end());
        int count=0;
        sort(heights.begin(),heights.end());
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i]!=ans[i])
                count++;
        }
        return count;
    }
};