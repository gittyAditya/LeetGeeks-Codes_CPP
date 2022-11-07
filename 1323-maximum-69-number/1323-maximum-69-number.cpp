class Solution {
public:
    int maximum69Number (int num) {
        int
            temp = num,
            i = 0,
            sixIndex = -1;
        
        while(temp>0){
            if(temp%10 == 6)
                sixIndex = i;
            temp /= 10;
            ++i;
        }
        sixIndex;
        return sixIndex != -1 ? (num + 3*(pow(10, sixIndex))) : num;
    }
};