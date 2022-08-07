class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0,prev=-1;
        vector<int>v;
        
        int n=nums1.size(),m=nums2.size();
        while(i<n&&j<m)
        {
            if(nums1[i]==nums2[j])
            {
                if(prev==-1||prev!=nums1[i])
                {
                v.push_back(nums1[i]);
                prev=nums1[i];
                }
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j])
            {
                i++;
            }
            else{
                j++;
            }
        }
       
        return v;
    }
};