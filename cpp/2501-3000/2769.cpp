class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int result = 0;
        bool foundOne = false;
        for (int i = 1; true; i++) {
            int steps = (num - i - 1) / 2;
            if (steps < 0) steps = -steps;
            if (steps <= t) {
                result = i;
                foundOne = true;
            } else if (foundOne) break;
        }
        return result;
    }
};
