class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.length();
        if(word[0] <= 'Z'){
            int count = 1;
            for(int i=1; i<n; ++i)
                if(word[i] <= 'Z')
                    count++;
            return count == 1 || count == n;
        }
        else for(int i=1; i<n; ++i)
                if(word[i] < 'a')
                    return false;
        return true;
    }
};