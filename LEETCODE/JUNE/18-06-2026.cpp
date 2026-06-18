// 1344. Angle Between Hands of a Clock



class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hrang = (hour%12)*30 + minutes*0.5;
        double minang = minutes*6;

        double diff = abs(hrang-minang);
        return min(diff, 360-diff);
    }
};
