class Solution {
public:
    vector<int> sumZero(int n) {
        if(n == 1) return {0};
            if(n == 2) return {-1,1};
                       vector<int>result;
            if(n%2 == 0) 
            {
                int k = n/2;
               while(k!= 0)
               {
                result.push_back(k);
                result.push_back(-k);
                --k;
               }
            }
        else
        {
                result.push_back(0);
                int k = (n-1)/2;
                               while(k!= 0)
               {
                result.push_back(k);
                result.push_back(-k);
                --k;
               }
        }


        
           return result;
    }
};