class Solution {
public:
    string reverseWords(string s) {
        string ans;
        stack<string> st;
        int n = s.size();
        stringstream ss(s);
        string word;
        while(ss >> word)
            st.push(word);
        while(!st.empty()){
            ans += st.top();
            if(st.size() != 1)
                ans += " "; 
            st.pop();
        }
        return ans;
    }
};