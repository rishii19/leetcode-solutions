class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        vector<int> v;
        int j=0;
        v.push_back(nums[j]);
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] != v[j]){
                v.push_back(nums[i]);
                j++;
            }
        }
        for(int i=0;i<v.size();i++)
         {
            nums[i] = v[i];
         }
        return v.size();
    }
};