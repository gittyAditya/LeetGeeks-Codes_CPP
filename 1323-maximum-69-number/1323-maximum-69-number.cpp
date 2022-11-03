class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        int n = s.size();
        int i=0;
        while(i<n-1 && s[i] == '9')
            ++i;
        s[i] = '9';
        int ans = stoi(s);
        return ans;
    }
};