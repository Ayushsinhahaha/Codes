class Solution {
public:
    double average(vector<int>& salary) {
        // vector<int>v;
        double n=salary.size();
        double maxn=INT_MIN,minx=INT_MAX,avg=0,ans=0;
        for(int i=0;i<salary.size();i++)
        {
            if(maxn<salary[i])
                maxn=salary[i];
            if(minx>salary[i])
                minx=salary[i];
        }
        for(int i=0;i<salary.size();i++)
        {
            avg+=salary[i];
        }
        ans=(avg-maxn-minx)/(n-2);
        return ans;
    }
};