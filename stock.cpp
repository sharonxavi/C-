#include <iostream>
using namespace std;
int maxprofit(int k, int* prices, int n) {
    if (n <= 1 || k <= 0) {
        return 0;
    }
    if (k >= n / 2) {
        int maxprofit = 0;
        for (int i = 1; i < n; i++) {
            if (prices[i] > prices[i - 1]) {
                maxprofit += prices[i] - prices[i - 1];
            }
        }
        return maxprofit;
    }
    int* buy = new int[k];
    int* sell = new int[k];
    for (int i = 0; i < k; i++) {
        buy[i] = -2147483647; 
        sell[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            buy[j] = max(buy[j], (j == 0 ? 0 : sell[j - 1]) - prices[i]);
            sell[j] = max(sell[j], buy[j] + prices[i]);
        }
    }
    int result = sell[k - 1];
    delete[] buy;
    delete[] sell;
    return result;
}
int main() {
    int k, n;
    cout << "Enter the value of k: ";
    cin >> k;
    cout << "Enter the number of prices: ";
    cin >> n;
    int* prices = new int[n];
    cout << "Enter the prices: ";
    for (int i = 0; i < n; i++) {
        std::cin >> prices[i];
    }
    int maxprofitval = maxprofit(k, prices, n);
    cout << "The maximum profit is: " << maxprofitval << endl;
    delete[] prices;
    return 0;
}
