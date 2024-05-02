#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.size() < 3)
        return nums.size();
    int prev_l = nums[0];
    int prev_r = nums[1];
    for (int i = 2; i < nums.size(); i++)
    {
        if (nums[i] == prev_r && prev_l == prev_r)
        {
            nums.erase(nums.begin() + i);
            i--;
        }
        prev_l = prev_r;
        prev_r = nums[i];
    }

    return nums.size();
}

int main()
{
    vector<int> nums{1, 1, 1, 2, 2, 3};
    cout << "Val: " << removeDuplicates(nums) << endl;
    cout << "Result: ";
    for (auto element : nums)
        cout << element << " ";
    cout << endl;
    return 0;
}
