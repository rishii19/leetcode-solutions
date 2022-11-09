//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        vector<int> ans;
        int n = array1.size();
        int m= array2.size();
        int i = 0,j =0;
        
        while(i<n && j<m){
            if(array1[i] == array2[j]){
                ans.push_back(array1[i]);
                ans.push_back(array2[j]);
                i++;
                j++;
            }
            else if(array1[i]<array2[j]){
                ans.push_back(array1[i]);
                i++;
            }
            else {
                ans.push_back(array2[j]);
                j++;
            }
        }
        while(i<n){
            ans.push_back(array1[i]);
            i++;
        }
        while(j<m){
            ans.push_back(array2[j]);
            j++;
        }
        
        int size = ans.size();
        
        if(size%2 == 0){
            double median = double(ans[size/2]+ans[size/2-1])/2;
            return median;
        }
        
        return ans[size/2];
        
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends