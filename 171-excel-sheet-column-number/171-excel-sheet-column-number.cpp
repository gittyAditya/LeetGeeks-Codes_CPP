class Solution {
public:
    int fun(string c, int i, int &ans) { //ye kitti ke kittu ne bataya hai behenchodddd
        if(i == c.size())
            return ans;
        ans = ans*26*1L + c[i]-64;
        return fun(c, i+1, ans);
    }
    int titleToNumber(string c) {
        int ans = 0;
        return fun(c, 0, ans);
    }
};
        // for(int i=0; i<n; ++i)
        //     ans = ans*26*1L + c[i] - 64;