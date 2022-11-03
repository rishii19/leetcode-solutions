class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> copy;
        int count =0;
        for(auto i:nums){
            if(i!=0) copy.push_back(i);
            else count++;
        }
        
        while(count>0)
        {
            copy.push_back(0);
            count--;
        }
        nums = copy;
    }
};