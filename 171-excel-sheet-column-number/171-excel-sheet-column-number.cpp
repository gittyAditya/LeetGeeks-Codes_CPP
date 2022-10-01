class Solution {
public:
    void fun(string c, int i, int &ans) {       // kittu ne kiya hai mere ;*;
        if(i == c.size())
            return;
        ans = ans*26*1L + c[i]-64;
        fun(c, i+1, ans);
    }
    int titleToNumber(string c) {
        int ans = 0;
        fun(c, 0, ans);
        return ans;
    }
};
        // for(int i=0; i<n; ++i)
        //     ans = ans*26*1L + c[i] - 64;