class Solution {
public:
    int mySqrt(int x) {
        long long res;
        for(long long i=0; i<=x; i++) {
            if (i*i == x) {
                res = i;
                break;
            } else if(i*i > x) {
                res = i - 1;
                break;
            }
        }
        return res;
    }
};