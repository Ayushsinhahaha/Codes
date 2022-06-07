class Solution {
public:
    bool linearSearch(vector<int>&nums,int original)
    {
        for(int i=0;i<nums.size();i++)
        {
            if(original==nums[i])
            {
                return 1;
            }
        }
        return 0;
    }
    int findFinalValue(vector<int>& nums, int original) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(linearSearch(nums,original)){
                original=2*original;                
            }
        }
        return original;
    }
};