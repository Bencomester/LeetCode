class Solution {
public:
    int minPartitions(string n) {
        int m = 1;
        for (int i = 0; i < n.length(); i++) {
            if (m == 9) break;
            int num = n[i] - '0';
            if (num > m) m = num;
        }
        return m;
    }
};
