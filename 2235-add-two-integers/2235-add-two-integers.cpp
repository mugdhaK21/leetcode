class Solution {
public:
    int sum(int num1, int num2) {
        for(int i = -200;i<=200;i++){
            if(num1+num2 == i){
                
                return i;
            }
        }
        return 0;
    }
};