class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if(digits[n-1] != 9){
            digits[n-1] += 1;
            return digits;
        }
        int carry = 1;
        int idx = n-1;
        while(carry){
            digits[idx] = 0;
            --idx;
            if(idx >=0 && digits[idx] == 9)
                carry = 1;
            else {
                carry = 0;
                if(idx >= 0)
                digits[idx] += 1;
            }
        }
        vector<int> ans;
        if(idx < 0){
            ans.push_back(1);
            for(auto i:digits)
                ans.push_back(i);
            return ans;
        }
        return digits;
    }
};