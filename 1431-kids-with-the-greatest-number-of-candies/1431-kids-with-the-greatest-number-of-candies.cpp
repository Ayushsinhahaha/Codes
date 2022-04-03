class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=candies[0];
        vector<bool> v;
        int n=candies.size();
        for(int i=1;i<n;i++)
        {
            if(candies[i]>maxi)
                maxi=candies[i];
        }
        
        for(int i=0;i<n;i++)
        {
            if(candies[i]+extraCandies>=maxi)
                v.push_back(true);
            else
                v.push_back(false);
        }
        return v;
    }
};