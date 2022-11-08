class Solution {
public:
    string makeGood(string s) {
        string ans = "";
        int n = s.size();
        stack <char> stk;
        for(int i=0; i<n; ++i){
            if(!stk.empty() && abs(stk.top()-s[i]) == 32)
                stk.pop();
            else stk.push(s[i]);
        }
        while(!stk.empty()){
            ans = stk.top() + ans;
            stk.pop();
        }
        return ans;
    }
};