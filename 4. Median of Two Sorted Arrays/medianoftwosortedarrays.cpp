class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans;
        int i=0, j=0, t;
        while(i<n && j<m){
            if(nums1[i] < nums2[j]){
                t = nums1[i];
                i++;
            }
            else if(nums1[i] > nums2[j]){
                t = nums2[j];
                j++;
            }
            else{
                t = nums1[i];
                ans.push_back(nums2[j]);
                i++;
                j++;
            }
            ans.push_back(t);
        }
        while(i<n){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            ans.push_back(nums2[j]);
            j++;
        }
        
        int a = ans.size();
        if(a%2 != 0)
            return (double)(ans[a/2]);
        else 
            return (double)(ans[(a - 1) / 2] + ans[a / 2]) / 2.0;
    }
};