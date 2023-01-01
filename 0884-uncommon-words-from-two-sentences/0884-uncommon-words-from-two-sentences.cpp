class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp;
        vector<string> ans;
        stringstream str1(s1);
        stringstream str2(s2);
        string word1, word2;
        while(str1 >> word1)
            mp[word1]++;
        while(str2 >> word2)
            mp[word2]++;
        for(auto i:mp)
            if(i.second == 1)
                ans.push_back(i.first);
        return ans;
    }
};