class Solution {
public:
    int countandsum(int n)
    {
        int sum=0;
        for(int i=1;i<=n/2;i++)
        {
            if(n%i==0)
            {
                sum+=i;
            }
        }
        return sum;
    }
    bool checkPerfectNumber(int num) {
        int ans=countandsum(num);
        return ans==num;
    }
};