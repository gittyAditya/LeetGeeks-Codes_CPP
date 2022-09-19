class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        unordered_map<string, int> mp;
        int m = s1.size();
        int n = s2.size();
        for(int i=0; i<m; ++i){
            string s = "";
            while(i<m && s1[i] != ' ')
                s += s1[i++];
            mp[s]++;
        }
        for(int i=0; i<n; ++i){
            string s = "";
            while(i<n && s2[i] != ' ')
                s += s2[i++];
            mp[s]++;
        }
        for(auto i:mp)
            if(i.second < 2)
                ans.push_back(i.first);
        return ans;
    }
};