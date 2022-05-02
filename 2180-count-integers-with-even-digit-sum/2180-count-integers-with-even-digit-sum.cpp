class Solution {
public:
    int findSum(int num)
    {
        int rem=0,s=0;
        while(num!=0)
        {
            rem=num%10;
            s+=rem;
            num/=10;
        }
        return s;
    }
    int countEven(int num) {
        int sum=0,count=0;
        for(int i=1;i<=num;i++)
        {
            sum=findSum(i);
            if(sum%2==0)
                count++;
        }
        return count;
    }
};