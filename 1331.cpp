class Solution {
public:
    vector<int> arrayRankTransform(const vector<int>& arr) {
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());
        sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());

        unordered_map<int, int> ranks;
        int rank = 1;
        for (const int& i : sorted) {
            ranks[i] = rank++;
        }
        
        vector<int> result;
        result.reserve(arr.size());
        for (const int& i : arr) {
            result.push_back(ranks[i]);
        }
        return result;
    }
};
