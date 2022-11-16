/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {        // only this is most optimized correct binary search
        int l = 1;
        int r = n;
        while(l<=r){
            int num = (r-l)/2 + l;      // save overflow
            if(guess(num) == -1)
                r = num-1;              // correct binary search appraoch
            else if(guess(num) == 1)
                l = num+1;              // binary search `\_o.o_/`
            else return num;
        }
        return 1;
    }
};