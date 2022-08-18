// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start=1,end=n;
        int ans=0;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(isBadVersion(mid)){
                end=mid-1;
                ans=mid;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};