/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

public class Solution extends GuessGame {
    public int guessNumber(int n) {
        int start=0;
        int end=n;
        while(start<=end){
             int m = start + (end - start)/2;
        if(guess(m)==0) return m;
        if(guess(m)==1){
            start=m+1;
        }else{
            end=m-1;
        }
        }
       
         return -1;
    }
}