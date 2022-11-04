class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
        int left =0, right = 1;
        int maxPro =0;
        
        while(right<prices.size()){
            if(prices[left]<prices[right])
            {
                int profit = prices[right]-prices[left];
                maxPro = max(profit,maxPro);
            }
            else{
                left = right;
            }
            right++;
        }
        return maxPro;
    }
};