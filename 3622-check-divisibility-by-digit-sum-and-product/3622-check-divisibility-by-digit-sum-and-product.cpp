class Solution {
public:
    bool checkDivisibility(int n) {
        int product=1;
        int sum=0;
        int original =n;
        while(n>0){
            int rem=n%10;
            product=product*rem;
            sum+=rem;
            n/=10;
        }
        long long t=sum+product;
        if(original%t==0){
            return true;
        }
        return false;
    }
};