class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int n=nums.size();
        int ab=nums[0]*nums[1];
        int cd=nums[n-1]*nums[n-2];
        ans=abs(ab-cd);
        return ans;
    }
};