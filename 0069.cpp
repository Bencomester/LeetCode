class Solution {
public:
    int mySqrt(int x) {
        for (long i = 1; i <= x; i++) {
            long sqr = i*i;
            if (sqr == (long) x) return (int) i;
            else if (sqr > (long) x) return (int) i - 1;
        }
        return 0;
    }
};