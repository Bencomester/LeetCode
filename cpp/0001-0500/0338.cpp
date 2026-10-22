class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result;
        for (int i = 0; i <= n; i++) result.push_back(bits(i));
        return result;
    }

    int bits(int n) {
        int count = 0;
        while (n != 0) {
            count += n % 2;
            n /= 2;
        }
        return count;
    }
};
