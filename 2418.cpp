class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int len = names.size();
        map<int, string> map;
        for (int i = 0; i < len; i++) map.insert({heights[i], names[i]});
        sort(heights.begin(), heights.end(), [&](const int& a, const int& b) {return a > b;});
        for (int i = 0; i < len; i++) names[i] = map[heights[i]];
        return names;
    }
};
