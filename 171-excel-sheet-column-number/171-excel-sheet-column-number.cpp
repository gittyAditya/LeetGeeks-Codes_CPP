class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();
        int ans = 0;
        for(int i=0; i<n; ++i)
            ans = ans*26*1L + columnTitle[i] - 64;
        return ans;
    }
};