class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> st= {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int
            i=0,
            j=s.size()-1;
        while(i<j){
            if(st.find(s[i]) != st.end() && st.find(s[j]) != st.end()){
                swap(s[i], s[j]);
                ++i;
                --j;
            }
            else if(st.find(s[i]) != st.end())
                --j;
            else ++i;
        }
        return s;
    }
};