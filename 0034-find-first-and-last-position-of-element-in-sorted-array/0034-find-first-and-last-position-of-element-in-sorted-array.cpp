class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int count1 =0;
        int count2 =0;
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<target){
                count1++;
            }
            else if(nums[i]==target) count2++;
        }
        
        if(count2 == 0){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        } 
        ans.push_back(count1);
        ans.push_back(count1+count2-1);
        return ans;
    }
};