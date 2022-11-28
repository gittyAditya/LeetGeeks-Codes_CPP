class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_set<int> st;
        vector<int> won;
        vector<int> one;
        unordered_map<int, int> mp;
        int n = matches.size();
        for(int i=0; i<n; ++i)
            mp[matches[i][1]]++;
        for(int i=0; i<n; ++i)
            if(mp.find(matches[i][0]) == mp.end())
                st.insert(matches[i][0]);
        for(auto i:mp)
            if(i.second == 1)
                one.push_back(i.first);
        for(auto i:st)
            won.push_back(i);
        sort(won.begin(), won.end());
        sort(one.begin(), one.end());
        return {won, one};
    }
};