class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> map;
        int k = nums.size()/2;
        
        for(int i = 0;i<nums.size();i++){
            map[nums[i]]++;
        }
        
        for(auto it: map){
            if(it.second >= k+1)
            return it.first;
        }
        return 0;
    }
};