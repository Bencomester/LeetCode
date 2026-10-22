class Solution {
public:
    double myPow(double x, int n) {
        if (x == 1) return 1;
        if (x == -1) {
            return n % 2 == 0 ? 1 : -1;
        };
        if (n < 0) {
            if (n < -1000) return 0;
            x = 1 / x;
            n = -(n + 1);
        } else n--;
        double product = 1;
        for (int i = 0; i <= n; i++) {
            product *= x;
        }
        return product;
    }
};