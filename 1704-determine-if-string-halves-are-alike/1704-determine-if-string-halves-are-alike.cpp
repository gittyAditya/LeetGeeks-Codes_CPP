class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        int c = 0;
        for(int i=0; i<n/2; ++i)
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                ++c;
        for(int i=n/2; i<n; ++i)
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                --c;
        return c==0 ? true : false;
    }
};