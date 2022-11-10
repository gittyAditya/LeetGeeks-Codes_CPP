class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int n = s.size();
        stack<char> stk;
        for(int i=0; i<n; ++i){
            if(!stk.empty() && s[i] == stk.top()){
                stk.pop();
                continue;
            }
            stk.push(s[i]);
        }
        while(!stk.empty()){
            ans = stk.top() + ans;
            stk.pop();
        }
        return ans;
    }
};