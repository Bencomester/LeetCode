class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int> v = {nums[0]};
        int last = nums[0];
        int l = nums.size();
        for (int i = 1; i < l; i++) {
            if (nums[i] == last) continue;
            last = nums[i];
            v.push_back(last);
        }

        int cnt = 0;
        l = v.size() - 1;
        for (int i = 1; i < l; i++) {
            if ((v[i - 1] < v[i] && v[i + 1] < v[i]) || (v[i - 1] > v[i] && v[i + 1] > v[i])) cnt++;
        }

        return cnt;
    }
};
