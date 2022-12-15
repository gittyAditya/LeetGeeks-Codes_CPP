class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<int> st;
        int ans = 0;
        for(auto i:jewels)
            st.insert(i);
        for(auto i:stones)
            if(st.find(i) != st.end())
                ans++;
        return ans;
    }
};