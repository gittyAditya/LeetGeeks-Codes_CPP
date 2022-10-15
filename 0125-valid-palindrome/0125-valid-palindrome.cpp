class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        int n = s.size();
        for(int i=0; i<n; ++i){
            if(s[i] > 64 && s[i] < 91)
                t += tolower(s[i]);
            else if(s[i] > 96 && s[i] < 123 || s[i] > 47 && s[i] < 58)
                t += s[i];
        }
        int i=0, j=t.size()-1;
        while(i<j)
            if(t[i++] != t[j--])
                return false;
        return true;
    }
};