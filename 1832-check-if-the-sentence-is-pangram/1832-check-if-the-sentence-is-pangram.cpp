class Solution {
public:
    bool checkIfPangram(string sentence) {
        int mask = 0;
        for(char i : sentence)
            mask |= 1 << i - 'a';
        if(mask == (1<<26) - 1)
            return true;
        return false;
    }
};