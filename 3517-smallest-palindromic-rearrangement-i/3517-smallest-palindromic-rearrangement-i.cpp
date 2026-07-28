class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        int half_l = n / 2;
        string half = s.substr(0, half_l);
        sort(half.begin(), half.end());
        string rev_h = half;
        reverse(rev_h.begin(), rev_h.end());
        if (n % 2 == 0) {
            return half + rev_h;

        } else {
            return half + s[half_l] + rev_h;
        }
    }
};