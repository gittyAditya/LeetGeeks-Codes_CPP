class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n = s.size();
        int i=0, j=n-1;
        while(i<j) {
            while(i < j && s[i] < 65 || s[i] > 122 || (s[i] > 90 && s[i] < 97))
                ++i;
            while(i < j && s[j] < 65 || s[j] > 122 || (s[j] > 90 && s[j] < 97))
                --j;
            if(i<j) {
                swap(s[i], s[j]);
                ++i;
                --j;
            }
        }
        return s;
    }
};