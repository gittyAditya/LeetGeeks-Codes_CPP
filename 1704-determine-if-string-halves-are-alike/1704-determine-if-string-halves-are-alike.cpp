class Solution {
public:
    bool halvesAreAlike(string s) {         // constant space, clean code, no hardcodes;
        int n = s.size();
        int c = 0;
        unordered_set<char> st = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        for(int i=0; i<n/2; ++i)
            if(st.count(s[i]))
                ++c;
        for(int i=n/2; i<n; ++i)
            if(st.count(s[i]))
                --c;
        return c==0 ? true : false;
    }
};