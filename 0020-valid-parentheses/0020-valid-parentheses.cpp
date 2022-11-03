class Solution {
public:
    bool isValid(string s) {
        if(s[0] == ')' || s[0] == '}' || s[0] == ']')
            return false;
        int n = s.size();
        stack<int> st;
        for(int i=0; i<n; ++i){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else {
                if(st.empty())
                    return false;
                else if(s[i] == ')' && st.top() == '('|| 
                        s[i] == '}' && st.top() == '{' 
                        || s[i] == ']' && st.top() == '[')
                    st.pop();
                else return false;
                    
            }
            
        }
        if(!st.empty())
            return false;
        return true;
    }
};