class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int all = pow(2, k);
        if (all > s.length() - 1 && k > 1) return false;
        unordered_set<string> set;
        int n = s.length() - k + 1;
        for (int i = 0; i < n; i++) {
             set.insert(s.substr(i, k));
        }
        return set.size() == all;
    }
};
