class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int len = arr.size();
        int cnt = 0;
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
            if (abs(arr[i] - arr[j]) > a) continue;
                for (int k = j + 1; k < len; k++) {
                    if (abs(arr[j] - arr[k]) > b) continue;
                    if (abs(arr[i] - arr[k]) <= c) cnt++;
                }
            }
        }
        return cnt;
    }
};
