class Solution {
public:
    bool canAliceWin(int n) {
        int k = 0,take=10;
        while(n>=take){
            n-=take;
            k++;
            take--;
        }
        return k % 2 == 1;
    }
};