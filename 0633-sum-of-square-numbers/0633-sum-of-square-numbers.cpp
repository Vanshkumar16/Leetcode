class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i=0;
        long long j=sqrt(c);
        long long square=0;
        while(i<=j){
            
             square=i*i+j*j;
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