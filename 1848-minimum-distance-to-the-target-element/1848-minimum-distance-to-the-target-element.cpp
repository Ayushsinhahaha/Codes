class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ans=0,mini=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                ans=abs(i-start);
                if(ans<mini)
                    mini=ans;
            }
        }
        return mini;
    }
};