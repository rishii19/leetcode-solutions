//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    unordered_map<char,int> map;
	    for(int i =0;i<pat.length();i++){
	        map[pat[i]]++;
	    }
	    int occ =0;
	    int i =0;
	    int j =0;
	    int k = pat.length();
	    int count = map.size();
	    
	    while(j<txt.length()){
	        if(map.find(txt[j]) != map.end()){
	            map[txt[j]]--;
	            if(map[txt[j]] == 0) 
	                count--;
	        }
	        if(j-i+1<k) j++;
	        else if(j-i+1 == k){
	            if(count == 0) occ++;
	            if(map.find(txt[i]) != map.end()){
	                map[txt[i]]++;
	                if(map[txt[i]] == 1) count++;
	            }
	           i++;
	           j++;
	        }
	    }
	    return occ;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends