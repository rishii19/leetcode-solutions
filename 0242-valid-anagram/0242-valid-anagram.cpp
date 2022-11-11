class Solution {
public:
    bool isAnagram(string s, string t) {
        
        
        //hashtable solution
        
        if(s.length() != t.length()) return false;
        unordered_map<char, int> map;
        
        for(int i=0;i<s.length();i++){
            map[s[i]]++;
            map[t[i]]--;
        }
        for(auto it:map){
            if(it.second>0) return false;
        }
        return true;
    }
};