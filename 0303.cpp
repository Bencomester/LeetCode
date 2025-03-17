class NumArray {
public:
    vector<int> sumUntil;
    NumArray(vector<int>& nums) {
        int sum = 0;
        for (int i : nums) {
            sum += i;
            sumUntil.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        return sumUntil[right] - (left == 0 ? 0 : sumUntil[left - 1]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
