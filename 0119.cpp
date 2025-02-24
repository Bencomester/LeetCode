class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> last = {1};
        for (int i = 1; i <= rowIndex; i++) {
            last = newLine(last);
        }
        return last;
    }

    vector<int> newLine(vector<int> lastLine) {
        vector<int> line = {1, 1};
        for (int i = 1; i < lastLine.size(); i++) {
            line.insert(line.begin() + i, lastLine[i - 1] + lastLine[i]);
        }
        return line;
    }
};