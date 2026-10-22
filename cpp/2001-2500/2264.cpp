class Solution {
public:
    string largestGoodInteger(string& num) {
        int n = -1;
        for (int i = num.length() - 3; i >= 0; i--) {
            if (num[i] < n) continue;
            if (n == 9) break; 
            if (num[i] == num[i + 1] && num[i + 1] == num[i + 2]) n = max(n, num[i] - '0');
        }
        return n == -1 ? "" : string(3, '0' + n);
    }
};
