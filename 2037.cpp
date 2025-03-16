class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int len = seats.size();
        int sum = 0;
        for (int i = 0; i < len; i++) sum += abs(seats[i] - students[i]);
        return sum;
    }
};
