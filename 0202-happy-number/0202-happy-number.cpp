class Solution {
public:
   int sumDigit(int n){
        int sum = 0,temp;
        while(n){
            temp = n%10;
            sum += temp*temp;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        do{
            slow = sumDigit(slow);
            fast = sumDigit(sumDigit(fast));
        }while(slow != fast);

        return slow == 1 ? true : false;      
    }
};