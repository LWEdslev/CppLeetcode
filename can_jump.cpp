#include <vector>
#include <memory>
#include <optional>
#include <iostream>

using namespace std;

// time: O(n), space: O(1)
bool canJump(vector<int> &nums)
{
    int indexOfZero = -1;
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        if (nums[i] == 0 && indexOfZero == -1)
            indexOfZero = i;
        if (indexOfZero != -1 && indexOfZero - i < nums[i])
            indexOfZero = -1;
    }
    return indexOfZero == -1;
}

int main()
{
    vector<int> nums = {0};
    cout << canJump(nums) << endl;
    return 0;
}