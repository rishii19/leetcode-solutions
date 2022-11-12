class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int i =0;
        int j=0;
        int n = arr.size()+k;
        
        while(i<n && j<arr.size()){
            if(i+1 == arr[j]){
                i++;
                j++;
            }
            else if(i+1 != arr[j]){
                i++;
                k--;
                if(k == 0) return i;
            }
            
        }
        
        return arr[arr.size()-1]+k;
    }
};