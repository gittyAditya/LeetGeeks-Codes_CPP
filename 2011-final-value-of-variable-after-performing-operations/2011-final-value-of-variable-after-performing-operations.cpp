class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        unordered_map<string, int> mp = {{"++X", 1},
                                         {"X++", 1},
                                         {"--X", -1},
                                         {"X--", -1}};
        int x = 0;
        for(auto i:operations)
            x += mp[i];
        return x;
    }
};