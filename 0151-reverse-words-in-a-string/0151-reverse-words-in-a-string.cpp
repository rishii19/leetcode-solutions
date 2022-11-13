class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        
        
        for(int i =0;i<s.length();i++){
            string temp ="";
            if(s[i] != ' '){
                while(i<s.length() && s[i] != ' '){
                    temp += s[i];
                    i++;
                }
                st.push(temp);
            }
        }
        // st.push(temp);
        s = "";
        s += st.top();
        st.pop();
        while(st.size()){
            s+=' '+st.top();
            st.pop();
        }
        
        return s;
    }
};