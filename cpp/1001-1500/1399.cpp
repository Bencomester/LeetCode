class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> map;
        int largest = 0;
        for (int i = 1; i <= n; i++) {
            int n = i;
            int sum = 0;
            while (n != 0) {
                sum += n % 10;
                n /= 10;
            }
            largest = max(largest, ++map[sum]);
        }
        int cnt = 0;
        for (auto i : map) if (i.second == largest) cnt++;
        return cnt;
    }
};
