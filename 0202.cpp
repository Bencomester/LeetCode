class Solution {
public:
    bool isHappy(int n) {
        vector<int> nums;
        while (n != 1) {
            if (find(nums.begin(), nums.end(), n) != nums.end()) return false;
            nums.insert(nums.end(), n);
            n = genNext(n);
        }
        return true;
    }

    int genNext(int n) {
        int num = 0;
        while (n != 0) {
            num += pow(n % 10, 2);
            n /= 10;
        }
        return num;
    }
};