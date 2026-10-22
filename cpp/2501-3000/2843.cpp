class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt = 0;
        for (int i = low; i <= high; i++) {
            if (i < 10) {
                i = 9;
                continue;
            } else if (i < 1000 && i > 99) {
                i = 999;
                continue;
            }

            if (i < 500) {
                if (i % 10 == i / 10) cnt++;
            } else if (i < 10000) {
                if (i % 10 + (i / 10) % 10 == (i / 100) % 10 + i / 1000) cnt++;
            }
        }
        return cnt;
    }
};
