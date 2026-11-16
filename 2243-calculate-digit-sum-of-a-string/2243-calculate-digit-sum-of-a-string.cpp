class Solution {
public:
    string digitSum(string s, int k) {
        // int n=s.size();
        // while(n>k){
        //     string temp;
        //     for(int i=0;i<n;i+=k){
        //         int val=0;
        //         for(int j=i;j<min(i+k,n);j++){
        //             val+=s[j] - '0';
        //         }
        //         temp.append(to_string(val));
        //     }
        //     s=temp;               
        // }
        // return s;
        while (s.size() > k) {
            string tmp;  // The string after each round
            int n = s.size();
            for (int i = 0; i < n; i += k) {
                int val = 0;
                for (int j = i; j < min(i + k, n); ++j) {
                    val += s[j] - '0';
                }
                tmp.append(to_string(val));
            }
            s = tmp;
        }
        return s;
    }
};