class Solution {
public:
    int minRange(int a, int b, int c) {
        int total=a+b+c;
        int x=min({a,b,c});
        int y=max({a,b,c});
        int z=total-x-y;
        if(x+z<y){
            y=x+z;
            return max({x,y,z})-x;
        }
        return y-x;
    }
};