class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for (int i = left; i <= right; i++) {
            int n = i;
            bool good = true;
            while (n > 0) {
                int d = n % 10;
                n /= 10;
                if (!d || i % d) {
                    good = false;
                    break;
                }
            }
            if (good) result.push_back(i);
        }
        return result;
    }
};
