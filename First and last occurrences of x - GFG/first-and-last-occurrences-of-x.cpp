//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> ans;
    int count1=0;
    int count2 =0;
    for(int i=0;i<n;i++){
        if(arr[i]<x) count1++;
        else if(arr[i]==x) count2++;
    }
    
    if(count2 == 0){
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
    
    ans.push_back(count1);
    ans.push_back(count1+count2-1);
    return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends