class Solution {
public:

    int calc(int n){
        int sum=0,k;
        while(n){
            k = n%10;
            sum+=pow(k,2);
            n/=10;
        }
        return sum;
    }

    bool isHappy(int n) {
        if(n<=0){ return false;}
        while(true){
            if(n>9){
                n = calc(n);
                if(n ==1){ return true;}
            }
            else if(n==1 || n==7){
                return true;
            }
            else if(n<=9 && n!=1){
                return false;
            }
        }
        return false; 
    }
};
