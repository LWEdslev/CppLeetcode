#include <vector>
#include <memory>
#include <optional>
#include <iostream>

using namespace std;

// time: O(n), space: O(1)
int maxProfit(vector<int> &prices)
{
    int profit = 0;
    int sum = 0;
    int buyPrice = prices[0];

    for (int i = 1; i < prices.size(); i++)
    {
        int sellPrice = prices[i];
        int profit = sellPrice - buyPrice;
        if (profit > 0)
            sum += profit;
        buyPrice = sellPrice;
    }
    
    return sum;
}

int main()
{
    vector<int> prices = {7, 1, 5, 0, 3, 6, 4};
    cout << maxProfit(prices) << endl;
    return 0;
}