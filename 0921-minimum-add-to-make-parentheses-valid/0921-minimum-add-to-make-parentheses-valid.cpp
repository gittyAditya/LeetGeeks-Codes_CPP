class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans = 0;
        int count = 0;
        int n = s.size();
        for(int i=0; i<n; ++i){
            if(count > 0 && s[i] == ')')
                --count;
            else if(count <= 0 && s[i] == ')')
                ++ans;
            else ++count;
        }
        return ans+count;
    }
};