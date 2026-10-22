class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long maxTime = LLONG_MAX;
        long long minTime = 0;
        long long time = (maxTime + minTime) / 2;
        char c = isCorrect(ranks, cars, time);
        while (c != 'b') {
            if (c == 'a') minTime = time;
            else maxTime = time;
            time = (minTime + maxTime) / 2;
            c = isCorrect(ranks, cars, time);
        }
        return time;
    }

    long long countAtTime(vector<int>& ranks, long long time) {
        long long n = 0;
        for (int i : ranks) n += floor(sqrt((double) time / i));
        return n;
    }

    char isCorrect(vector<int>& ranks, int cars, long long time) {
        long long before = countAtTime(ranks, time - 1);
        long long after = countAtTime(ranks, time);
        if (before < cars) {
            if (after >= cars) return 'b';
            else return 'a';
        }
        return 'c';
    }
};
