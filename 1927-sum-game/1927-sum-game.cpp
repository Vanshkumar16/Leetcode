class Solution {
public:
    bool sumGame(string num) {

        int n=num.size();
        int left=0;
        int right=0;
        int sum1=0;
        int sum2=0;
        for (int i = 0; i < n / 2; i++) {
            if (num[i] == '?') left++;
            else sum1 += num[i] - '0'; 
        }
        for (int i = n/2; i < n ; i++) {
            if (num[i] == '?') right++;
            else sum2 += num[i] - '0'; 
        }
        return (sum1 - sum2) * 2 != (right - left) * 9;
        
    }
};