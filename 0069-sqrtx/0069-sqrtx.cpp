class Solution {
public:
    int mySqrt(int x) {
        if(x<=1)
            return x;
        long n = 1;
        while(n*n <= x)
            ++n;
        return --n;
    }
};