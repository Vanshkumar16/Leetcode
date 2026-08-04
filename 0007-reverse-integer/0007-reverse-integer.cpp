class Solution {
public:
    int solve(int x){
        int digit=0;
        while(x!=0){
            int rem =x%10;
            if(digit>INT_MAX/10 ||(digit==INT_MAX/10 && rem>7)) return 0;
            if(digit<INT_MIN/10 || (digit==INT_MIN/10 && rem<-8))return 0;
            digit=digit*10+rem;
            x/=10;
            
        }

        // cout<<digit;
        return digit;
    }
    int reverse(int x) {
        int a=solve(x);
        return a;
    }
};