class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> first = {1};
        vector<vector<int>> pascal;
        pascal.insert(pascal.begin(), first);
        for (int i = 1; i < numRows; i++) {
            pascal.insert(pascal.end(), newLine(pascal[i - 1]));
        }
        return pascal;
    }

    vector<int> newLine(vector<int> lastLine) {
        vector<int> line = {1, 1};
        for (int i = 1; i < lastLine.size(); i++) {
            line.insert(line.begin() + i, lastLine[i - 1] + lastLine[i]);
        }
        return line;
    }
};