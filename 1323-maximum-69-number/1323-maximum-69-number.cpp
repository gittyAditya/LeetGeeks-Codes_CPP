class Solution {
public:
    int maximum69Number (int num) {
        int 
            temp = num,
            sixIndex = -1;
        for(int i=1; temp>0; i*=10, temp/=10)
            if(temp%10 == 6)
                sixIndex = i;
        return sixIndex == -1 ? num : num + 3*sixIndex;
    }
};