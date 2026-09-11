class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);
        for (int d : digits) {
            freq[d]++;
        }
        int count = 0;
        for (int i = 100; i <= 999; i += 2) {
            int h = i / 100;
            int t = (i / 10) % 10;
            int u = i % 10;
            vector<int> check(10, 0);
            check[h]++;
            check[t]++;
            check[u]++;
            bool flag = true;
            for (int d = 0; d < 10; ++d) {
                if (check[d] > freq[d]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                count++;
            }
        }
        return count;
    }
};