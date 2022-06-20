class Solution {
public:
    double trimMean(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int number=(5*n)/100;
        double sum=0,terms=n-(2*number);
        double mean=0;
        for(int i=number;i<n-number;i++)
        {
            sum+=arr[i];
        }
        mean=sum/terms;
        return mean;
    }
};