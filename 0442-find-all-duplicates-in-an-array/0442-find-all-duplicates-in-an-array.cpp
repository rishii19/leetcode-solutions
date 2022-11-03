class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> map;
        vector<int> ans;
            
        for(auto i:nums){
                ++map[i];    
        }
         for(auto i:map)
         {
             if(i.second>1)
                 ans.push_back(i.first);
         }
        return ans;        
    }
};