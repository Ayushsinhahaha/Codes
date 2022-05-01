class Solution {
public:
    int signFunc(int p)
    {
        if(p==1)
            return 1;
        else
            return -1;
    }
    int arraySign(vector<int>& nums) {
        int p=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                return 0;
            else if(nums[i]<0)
                p=p*(-1);
            else if(nums[i]>0)
                p=p*1;
        }
        return signFunc(p);
    }
};