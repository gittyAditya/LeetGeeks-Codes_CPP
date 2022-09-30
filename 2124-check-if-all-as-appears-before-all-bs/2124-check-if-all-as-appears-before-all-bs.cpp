class Solution {
public:
    bool checkString(string s) {
        char c = '0';
        for(char i:s){
            if(i == c)
                return false;
            if(i == 'b')
                c = 'a';
        }
        return true;
    }
};