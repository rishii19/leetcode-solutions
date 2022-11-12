//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string commonPrefixUtil(string& str1, string& str2){
        string result ="";
        int len = min(str1.length(),str2.length());
        
        for(int i=0;i<len;i++){
            if(str1[i] != str2[i])
                break;
            result+= str1[i];
        }
        return result;
    }
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string prefix = arr[0];
        for(int i=1;i<N;i++){
            prefix = commonPrefixUtil(prefix,arr[i]);
        }
        
        if(prefix.length()>0) return (prefix);
        return "-1";
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends