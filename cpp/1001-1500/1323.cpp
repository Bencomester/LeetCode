class Solution {
public:
    int maximum69Number (int num) {
        int d = 1000;
        while ((num / d) % 10 != 6) {
            if (d == 1) return num;
            d /= 10;
        }
        return num + d * 3;
    }
};
