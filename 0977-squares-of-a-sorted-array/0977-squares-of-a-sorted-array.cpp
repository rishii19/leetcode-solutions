class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> ans(nums.size());
        int k  = nums.size()-1;
        
        int start = 0;
        int end = nums.size()-1;
        
        while(start<=end){
            
            if(abs(nums[start])>abs(nums[end])){
                ans[k] = nums[start]*nums[start];
                start++;
                k--;
            }
            else{
                ans[k] = nums[end]*nums[end];
                end--;
                k--;
            }
        }
        return ans;
    }
};