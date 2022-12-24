class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> count(26,INT_MAX);
        for(auto i:words){
            vector<int> freq(26,0);
            for(auto j:i)
                freq[j-'a']++;
            for(int i=0; i<26; ++i)
                count[i] = min(count[i], freq[i]);
        }
        vector<string> ans;
        for(int i=0; i<26; ++i)
            for(int j=0; j<count[i]; ++j)
                ans.push_back(string(1, i+'a'));
        return ans;
    }
};