class Solution {
public:
    int countSoldiers(const vector<int>& row) {
        int low = 0, high = row.size();
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (row[mid] == 1) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }return low;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int r=mat.size();
        vector<pair<int,int>>roe;
        for(int i=0;i<r;i++){
            int count=countSoldiers(mat[i]);
            roe.push_back({count,i});
        }
        sort(roe.begin(),roe.end());
        vector<int>result;
        for(int i=0;i<k;i++){
            result.push_back(roe[i].second);
        }
        return result;
    }
};