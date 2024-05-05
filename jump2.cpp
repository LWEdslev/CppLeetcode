#include <vector>
#include <memory>
#include <optional>
#include <iostream>

using namespace std;

int jump(vector<int>& nums) 
{
    if (nums.size() == 1) 
            return 0;
    int reach = nums[0];
    int step = nums[0];
    int jumps = 1;
    for (int i = 1; i < nums.size() ; i++)
    {
        if (i == nums.size() - 1) 
            return jumps;
        reach = max(reach, i + nums[i]);
        step--;
        if (step == 0) 
        {
            jumps++;
            step = reach - i;
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {2, 3, 1, 1, 4};
    cout << jump(nums) << endl;
    return 0;
}