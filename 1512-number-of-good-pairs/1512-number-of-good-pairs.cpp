class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++){
                if((nums[i]==nums[j])&&(i<j))
                {
                    v.push_back(i);
                }
            }
        }
        return v.size();
    }
};