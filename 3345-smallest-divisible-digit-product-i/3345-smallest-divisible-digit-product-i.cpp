class Solution {
public:
    int digit(int x){
        int rem=1;
        while(x>0){
            rem*=(x%10);
            x/=10;
        }
        return rem;
    }
    int smallestNumber(int n, int t) {
        while(true){
            if(digit(n)%t==0){
                return n;
            }
            n++;
        }
    }
};