class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r = 0;
        int w = 0;
        int b = 0;
        for (const int& i : nums) {
            switch (i) {
                case 0:
                    r++;
                    break;
                case 1:
                    w++;
                    break;
                case 2:
                    b++;
                    break;
            }
        }
        nums.clear();
        for (int i = 0; i < r; i++) nums.push_back(0);
        for (int i = 0; i < w; i++) nums.push_back(1);
        for (int i = 0; i < b; i++) nums.push_back(2);
    }
};
