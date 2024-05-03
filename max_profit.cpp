#include <vector>
#include <memory>
#include <optional>
#include <iostream>

using namespace std;

// time: O(n), space: O(1)
int maxProfit(vector<int> &prices)
{
    if (prices.size() == 0) return 0;
    int maxProfit = 0;
    int cheapest = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        int p = prices[i];
        if (cheapest > p) {
            cheapest = p;
        } else {
            maxProfit = max(maxProfit, p - cheapest);
        }
    }
    return maxProfit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 0, 3, 6, 4};
    cout << maxProfit(prices) << endl;
    return 0;
}