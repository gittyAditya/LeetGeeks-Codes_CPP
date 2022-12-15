class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int> jewel(123);
        int ans = 0;
        for(auto i:jewels)
            jewel[i]++;
        for(auto i:stones)
            ans += jewel[i];
        return ans;
    }
};