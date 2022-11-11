class Solution {
public:
    string makeGood(string s) {
        string ans;
        int n = s.size();
        for(int i=0; i<n; ++i){
            ans.push_back(s[i]);
            while(ans.size() && (ans.back()==s[i+1]+32 || ans.back()==s[i+1]-32)){
                ans.pop_back();
                ++i;  // get one extra ahead because we've been checking 'i+1'
            }
        }
        return ans;
    }
};