class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = nums1.size() - 1;
        m--;
        n--;
        while (m != -1 || n != -1) {
            if (n == -1 || (m != -1 && nums1[m] >= nums2[n])) {
                nums1[i--] = nums1[m--];
            } else {
                nums1[i--] = nums2[n--];
            }
        }
        //for (int i = 0; i < arr.size(); i++) nums1[i] = arr[i];
    }
};