class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());

        double small = 0.05 * n;
        double large = 0.05 * n;
        // n=n-int(small)-int(large);
        n=n-(int)large;
        double avg=0.0;
        for(int i=(int)small;i<n;i++){
            avg+=arr[i];
        }
        n=n-int(small);
        avg=avg/n;
        return avg;
    }
};