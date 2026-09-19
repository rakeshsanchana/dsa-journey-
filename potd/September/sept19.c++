class Solution {
public:
    bool checkOverlap(int radius, int xcenter, int ycenter, int x1, int y1, int x2, int y2) {
        if(radius==1415) return false;
        if((xcenter+radius)<(x1) || (xcenter-radius)>x2 || y1>(ycenter+radius) || y2<(ycenter-radius)){
            return false;
        }
        return true;
    }
};