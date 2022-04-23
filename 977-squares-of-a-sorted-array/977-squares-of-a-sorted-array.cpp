class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            int temp=0;
            temp=nums[i]*nums[i];
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        return v;
    }
};