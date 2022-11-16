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
    int guessNumber(int n) {
        long l = 1;
        long r = n*1L+1;        // this or change int n -> long n;
        long num = (l+r)/2;
        while(l<r){
            if(guess(num) == -1){
                r = num;
                num = (l+r)/2;
            }
            else if(guess(num) == 1){
                l = num;
                num = (l+r)/2;
            }
            else return num;
        }
        return num;
    }
};