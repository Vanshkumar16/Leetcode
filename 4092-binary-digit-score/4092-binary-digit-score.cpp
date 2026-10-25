class Solution {
public:
    int calculateScore(int a, int b) {
        int s1=0;
        int s2=0;
        while(a)
        {
            if(a%2!=0)
            {
                s1++;
            }
            a /=2;
        }
        while(b)
        {
            if(b%2!=0)
                 s2++;
            b/=2;
        }

        if(s1==0)
           return 0;
        if(s1>=s2)
           return s1*s2;
        else
           return s2/s1;
    }
};