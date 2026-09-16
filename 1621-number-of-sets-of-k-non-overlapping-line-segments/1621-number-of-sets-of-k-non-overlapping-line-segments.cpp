class Solution {
public:
    const int MOD=1e9+7;
    long long pow(long long a,long long b){
        long long res=1;
        while(b>0){
            if(b&1)res=res*a%MOD;
            a=a*a%MOD;
            b>>=1;
        }
        return res;

    }
    int numberOfSets(int n, int k) {
        int m=2*k;
        long long num=1,dem=1;
        for(int i=1;i<=m;i++){
            num=num*(n+k-i)%MOD;
            dem=dem*i %MOD;
        }
        return num*pow(dem,MOD-2)%MOD;
    }
};