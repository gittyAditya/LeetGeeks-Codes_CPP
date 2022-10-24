class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(), ws = 0;
        if(n <= 1)
            return n;
        int ans = INT_MIN;
        unordered_map<char, int> mp;
        for(int we=0; we<n; ++we){
            char r = s[we];
            if(mp.find(r) != mp.end())
                ws = max(ws, mp[r]+1);
            mp[r] = we;
            ans = max(ans, we-ws+1);        // or maybe 'max(ans, mp.size())'
        }
        return ans;
    }
};