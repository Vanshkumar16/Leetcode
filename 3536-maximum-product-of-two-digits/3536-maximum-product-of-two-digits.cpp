class Solution {
public:
    int maxProduct(int n) {
        int maxi=0;
        int secondmaxi=0;
        // vector<long long>a(n);
        while(n>0){
            int rem=n%10;
            // maxi=max(maxi,rem);
            if(rem>=maxi){
                secondmaxi=maxi;
                maxi=rem;
            }else  if(rem>secondmaxi){
                secondmaxi=rem;
            }
            // a.append(rem);
            n/=10;
        }
        // sort(a.begin(),a.end());
        // product=a[-1]*a[-2];
        return secondmaxi*maxi;
    }
};