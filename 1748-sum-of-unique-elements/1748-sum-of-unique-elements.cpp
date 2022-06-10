class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            s=s+nums[i];
        }
        sort(nums.begin(),nums.end());
        int arr[101]={0};
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]+=1;
        }
        for(int i=0;i<101;i++){
            if(arr[i]>1){
                s=s-arr[i]*i;
            }
        }
        return s;
    
    }
};