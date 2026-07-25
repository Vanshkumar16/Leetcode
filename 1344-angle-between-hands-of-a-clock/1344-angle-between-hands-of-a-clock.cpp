class Solution {
public:
    double angleClock(int hour, int minutes) {
        double angle=0;
        angle=min(abs(30*(hour%12)-5.5*minutes),360-(abs(30*(hour%12)-5.5*minutes)));
        return angle;
    }
};