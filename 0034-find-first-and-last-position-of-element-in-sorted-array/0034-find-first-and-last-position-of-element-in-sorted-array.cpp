class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans;
        
        int start =0;
        int end = nums.size()-1;
        int occ =-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            
            if(nums[mid] ==target){
                occ = mid;
                end = mid-1;
            }
            else if(nums[mid]<target){
                start = mid+1;
            }else end = mid-1;
        }
        ans.push_back(occ);
        
         start =0;
         end = nums.size()-1;
         occ =-1;
         while(start<=end){
            int mid = start+(end-start)/2;
            
            if(nums[mid] ==target){
                occ = mid;
                start = mid+1;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }else start = mid+1;
        }
        ans.push_back(occ);
        
        return ans;
    }
};