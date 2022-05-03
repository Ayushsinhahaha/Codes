class Solution {
public:
    int numberOfDigits(int n)
    {
        int cnt = 0;
        while(n > 0)
        {
            n /= 10;
             cnt++;
    }
    return cnt;
    }
    int findNumbers(vector<int>& nums) {
        int result = 0;
        for(int &i : nums)
        if(numberOfDigits(i) % 2 == 0)
            result++;
    return result;
    }
};