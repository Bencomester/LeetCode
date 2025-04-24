class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        map<int, int> numOfMultiple;
        map<int, int> bestMultiple;
        vector<int> result;
        for (int i = len - 1; i >= 0; i--) {
            for (int j = i + 1; j < len; j++) {
                if (nums[j] % nums[i] == 0 && numOfMultiple[bestMultiple[nums[i]]] <= numOfMultiple[nums[j]]) {
                    bestMultiple[nums[i]] = nums[j];
                    numOfMultiple[nums[i]] = 1 + numOfMultiple[nums[j]];
                }
                
            }
        }
        set<int> used;
        for (int i : nums) {
            if (used.contains(i)) continue;
            vector<int> current = {i};
            int next = bestMultiple[i];
            while (next) {
                used.insert(next);
                current.push_back(next);
                next = bestMultiple[next];
            }
            if (current.size() > result.size()) result = current;
        }
        return result;
    }
};
