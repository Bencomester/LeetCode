class Solution {
public:
    int romanToInt(string s) {
        int n = 0;
        int current = value(s[0]);
        int last = current;
        for (int i = 1; i < s.length(); i++) {
            int val = value(s[i]);
            if (last == val) {
                current += val;
                last = val;
                continue;
            }
            else if (val < last) {
                n += current;
                current = val;
            }
            else {
                current = val - current;
                n += current;
                current = 0;
            }
            last = val;
        }
        n += current;
        return n;
    }

    int value(char c) {
        switch(c) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }
    }
};
