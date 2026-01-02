class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> set;
        for (const int& i : nums) {
            if (set.contains(i)) return i;
            set.insert(i);
        }
        return 0;
    }
};
