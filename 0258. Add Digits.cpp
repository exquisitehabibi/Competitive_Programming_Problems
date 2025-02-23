class Solution {
public:
    int summ(int num){
        int sum=0;
        while(num){
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    int addDigits(int num) {
        int sum = summ(num);
        while(sum>9){
            sum = summ(sum);
        }
        return sum;   
    }
};
