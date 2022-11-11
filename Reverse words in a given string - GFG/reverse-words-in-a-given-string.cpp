//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
         // code here 
        stack<string>st;
        string s ="";
        
        for(int i =0;i<S.length();i++){
            if(S[i] != '.'){
                s += S[i];
            }
            else{
                st.push(s);
                s = "";
            }
        }
        st.push(s);
        S ="";
        while(!st.empty()){
            string top = st.top();
            st.pop();
            S += top+'.';
        }
        S.pop_back();
        return S;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends