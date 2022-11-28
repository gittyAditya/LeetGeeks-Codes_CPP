class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> mp;
        int n = matches.size();
        for(int i=0; i<n; ++i){
            mp[matches[i][0]];
            mp[matches[i][1]]++;
        }
        vector<int> won;
        vector<int> one;
        for(auto i:mp){
            if(i.second == 0)
                won.push_back(i.first);
            else if(i.second == 1)
                one.push_back(i.first);
        }
        return {won, one};
    }
};