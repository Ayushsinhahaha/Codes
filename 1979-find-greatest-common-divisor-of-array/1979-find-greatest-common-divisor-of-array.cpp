class Solution {
public:
    
    int gcd(int a,int b)
    {
        if(a==0)
            return b;
        
        if(b==0)
            return a;
        
        while(a!=b)
        {
            if(a>b)
            {
                a=a-b;
            }else{
                b=b-a;
            }
        }
        return a;
        
    }
    
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int a=nums[0];
        int b=nums[n-1];
        
        int ans=gcd(a,b);
        return ans;
        
    }
};