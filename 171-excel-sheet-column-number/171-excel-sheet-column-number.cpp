class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();
        int ans = 0;
        for(int i=n-1; i>=0; --i)
            ans += (columnTitle[i] - 64)*pow(26, n-1-i);
        return ans;
    }
};