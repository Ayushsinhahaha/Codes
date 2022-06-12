class Solution {
public:
    int reverse(int x)
    {
        int rem=0,rev=0;
        while(x!=0)
        {
            rem=x%10;
            if((rev<INT_MIN/10)||(rev>INT_MAX/10))
                return 0;
            rev=rev*10+rem;
            x/=10;
        }
        return rev;
    }
    bool isPalindrome(int x) {
        vector<int>v;
        v.push_back(x);
        vector<int>nv;
        int ans=reverse(x);
        nv.push_back(ans);
        for(int i=0;i<v.size();i++)
        {
            if(v[i]<0)
                return 0;
            if(v[i]!=nv[i])
                return 0;
        }
        return 1;
        
    }
};