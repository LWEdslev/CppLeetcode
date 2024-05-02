#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int prev = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == prev) {
            nums.erase(nums.begin() + i);
            i--;
        }
        prev = nums[i];
    }
    
    return nums.size();
}

int main()
{
    vector<int> nums{0,0,1,1,1,2,2,3,3,4};
    cout << "Val: " << removeDuplicates(nums) << endl;
    cout << "Result: ";
    for (auto element : nums)
        cout << element << " ";
    cout << endl;
    return 0;
}
