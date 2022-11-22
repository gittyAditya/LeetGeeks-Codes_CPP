class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ans(n);
        ans[0] = 1;
        int 
            t2=0,
            t3=0,
            t5=0;
        for(int i=1; i<n; ++i){
            ans[i] = min(2*ans[t2], min(3*ans[t3], 5*ans[t5]));
            
            if(ans[i] == 2*ans[t2])
                t2++;
            if(ans[i] == 3*ans[t3])     // no else ifs to avoid duplicate values of two values
                t3++;
            if(ans[i] == 5*ans[t5])
                t5++;
        }
        return ans[n-1];
    }
};