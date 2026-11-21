class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n=rain.size();
        vector<string>ans(n,"None");
        int alicecount=0,bobcount=0;
        for(int i=0;i<n;++i){
            bool alice=(i<n-1 && rain[i]==1 && rain[i+1]==1);
            bool bob=(rain[i]==1);

            if(alice&bob){
                if(alicecount<=bobcount){
                    alicecount++;
                    ans[i]="Alice";
                }else{
                    ans[i]="Bob";
                    bobcount++;
                }
            }else if(bob){
                ans[i]="Bob";
                bobcount++;
            }
        }
        return ans;
    }
};