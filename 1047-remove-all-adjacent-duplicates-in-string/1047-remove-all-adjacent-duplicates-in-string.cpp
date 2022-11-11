class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        int n = s.size();
        for(int i=0; i<n; ++i){
            ans.push_back(s[i]);
            while(ans.size() && ans.back() == s[i+1]){
                ans.pop_back();
                ++i;
            }
        }
        return ans;
    }
};