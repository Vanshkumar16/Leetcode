class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i=0;
        long long j=sqrt(c);
        while(i<=j){
            long long square=i*i+j*j;
            if(square==c){
                return true;
            }
            if(square<c){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
    }
};