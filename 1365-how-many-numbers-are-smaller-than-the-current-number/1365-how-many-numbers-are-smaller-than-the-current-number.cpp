class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            count=0;
            for(int j=0;j<n;j++)
            {
                if(nums[i]>nums[j])
                    count++;
            }
            v.push_back(count);
        }
        return v;
    }
};