class Solution {
public:
    int reverse(int x) {
        if (x == -2147483648) return 0;
        string num = "";
        bool pos = true;
        if (x < 0) {
            pos = false;
            x = -x;
        }
        while (x != 0) {
            num += to_string(x % 10);
            x /= 10;
        }
        if (!pos) num = "-" + num;
        return inRange(num) ? stoi(num) : 0;
    }

    bool inRange(string str) {
        if (str == "") return false;
        if (str[0] == '-') {
            if (str.length() != 11) return true;
            vector<int> limit = {2, 1, 4, 7, 4, 8, 3, 6, 4, 8};
            for (int i = 1; i < 11; i++) {
                if (str[i] - '0' > limit[i - 1]) return false;
                else if (str[i] - '0' < limit[i - 1]) return true;
            }
        } else {
            if (str.length() != 10) return true;
            vector<int> limit = {2, 1, 4, 7, 4, 8, 3, 6, 4, 7};
            for (int i = 0; i < 10; i++) {
                if (str[i] - '0' > limit[i]) return false;
                else if (str[i] - '0' < limit[i]) return true;
            }
        }
        return true;
    }
};
