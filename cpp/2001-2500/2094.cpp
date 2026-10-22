class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int> set;
        unordered_map<int, int> map;
        for (int i : digits) map[i]++;
        digits.clear();
        for (auto item : map) for (int i = min(item.second, (item.first == 0 || item.first % 2) ? 2 : 3); i > 0; i--) digits.push_back(item.first);
        int len = digits.size();
        for (int i = 0; i < len - 2; i++) {
            for (int j = i + 1; j < len - 1; j++) {
                for (int k = j + 1; k < len; k++) {
                    if (digits[i] % 2 == 0) {
                        if (digits[k] > 0) set.insert(digits[i] + digits[j] * 10 + digits[k] * 100);
                        if (digits[j] > 0) set.insert(digits[i] + digits[k] * 10 + digits[j] * 100);
                    }
                    if (digits[j] % 2 == 0) {
                        if (digits[k] > 0) set.insert(digits[j] + digits[i] * 10 + digits[k] * 100);
                        if (digits[i] > 0) set.insert(digits[j] + digits[k] * 10 + digits[i] * 100);
                    }
                    if (digits[k] % 2 == 0) {
                        if (digits[j] > 0) set.insert(digits[k] + digits[i] * 10 + digits[j] * 100);
                        if (digits[i] > 0) set.insert(digits[k] + digits[j] * 10 + digits[i] * 100);
                    }
                }
            }
        }
        return vector<int>(set.begin(), set.end());
    }
};
