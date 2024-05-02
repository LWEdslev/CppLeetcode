#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rotate(vector<int> &nums, int k)
{
    std::rotate(nums.begin(), nums.end() - k % nums.size(), nums.end());
}

int main()
{
    vector<int> nums{1, 2, 3, 4, 5, 6};
    rotate(nums, 2);
    cout << "Result: ";
    for (auto element : nums)
        cout << element << " ";
    cout << endl;
}