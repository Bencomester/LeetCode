class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int count = nums.size();
        vector<string> r;
        if (count == 0) return r;
        int starter = nums[0];
        for (int i = 1; i < count; i++) {
            if (nums[i] - 1 != nums[i - 1]) {
                r.insert(r.end(), range(starter, nums[i-1]));
                starter = nums[i];
            }
        }
        r.insert(r.end(), range(starter, nums[count - 1]));
        return r;
    }

    string range(int a, int b) {
        return a == b ? to_string(a) : (to_string(a) + "->" + to_string(b));
    }
};