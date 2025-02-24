class Solution {
public:
    int maxProfit(vector<int>& prices) {
        prices = deleteRepeating(prices);
        int max = 0;
        int minBuy = prices[0];
        //int sellPos = prices.size() - 1;
        for (int i = 0; i < prices.size() - 1; i++) {
            if (prices[i] > minBuy) continue;
            minBuy = prices[i];
            bool found = false;
            for (int j = prices.size() - 1; j >= i; j--) {
                int current = prices[j] - prices[i];
                if (current > max) max = current;
                //if (minBuy <= prices[j] && !found) {
                    //sellPos = j;
                    //found = true;
                //}
            }
        }
        return max;
    }

    vector<int> deleteRepeating(vector<int> fasz) {
        for (int i = 0; i < fasz.size() - 1; i++) {
            if (fasz[i] == fasz[i + 1]) fasz.erase(fasz.begin() + i--);
        }
        return fasz;
    }
};