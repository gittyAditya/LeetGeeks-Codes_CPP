class Solution {
public:
    string makeGood(string s) {
        string ans;
        int n = s.size();
        for(int i=0; i<n; ++i){
            if(ans.size() && (ans.back()==s[i]+32 || ans.back()==s[i]-32))
                ans.pop_back();
            else ans.push_back(s[i]);
        }
        return ans;
    }
};