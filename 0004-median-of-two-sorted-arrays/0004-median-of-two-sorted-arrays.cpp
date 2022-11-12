class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        
        int n = nums1.size();
        int m = nums2.size();
        
        int i=0,j=0;
        
        while(i<n && j<m){
            if(nums1[i] == nums2[j]){
                ans.push_back(nums1[i]);
                ans.push_back(nums2[j]);
                j++;
                i++;
            }
            else if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            ans.push_back(nums2[j]);
            j++;
        }
        int size = ans.size();
        int mid = size/2;
        if(size%2 == 0){
            return (double)(ans[mid]+ans[mid-1])/2;
        }
        return (double)ans[mid];
    }
};