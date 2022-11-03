class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for(auto i : nums)
        {
            if(i==0) count++;
        }
        int j =0;
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i] == 0)
                continue;
            else{
                nums[j] = nums[i];
                j++;
            }
        }
        int k = nums.size()-count;
        
        for(int i =k;i<nums.size();i++)
        {
            nums[i] =0;
        }
    }
};