class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> result;
        int totalNums = 1 << n; // 2^n
        // result.reserve(totalNums);
        
        for (int i = 0; i < totalNums; i++) {
            result.push_back(i ^ (i >> 1));
        }
        
        return result;
    }
};