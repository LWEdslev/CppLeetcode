#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == val)
        {
            nums.erase(nums.begin() + i);
            count++;
            i--;
        }
    }

    return nums.size();
}

int main()
{
    vector<int> nums{0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;
    int out = removeElement(nums, val);
    cout << "We removed " << out << " elements" << endl;
    cout << "Nums len " << nums.size() << endl;
    cout << "Result: ";
    for (auto element : nums)
        cout << element << " ";
    cout << endl;
    return 0;
}
