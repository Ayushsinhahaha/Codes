class Solution {
public:
    bool isHappy(int n) {
        while(n!=1)
        {
            int sum=0;
            while(n)
            {
                int r=n%10;
                sum+=r*r;
                n/=10;
            }
            n=sum;
            if(n==89)break;
        }
        return n==1;
    }
};