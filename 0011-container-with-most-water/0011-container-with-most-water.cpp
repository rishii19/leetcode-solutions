class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int left =0;
        int right = height.size()-1;
        int maxi =0;
        
        while(left<right)
        {
            int area = (right-left)*min(height[right],height[left]);
            maxi = max(area,maxi);
            
            if(height[right]>height[left]) left++;
            else right--;
        }
        return maxi;
    }
};