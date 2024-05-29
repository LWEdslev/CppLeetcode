#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int productExZero = 1;
    int zeroes = 0;
    for (auto n : nums)
    {
        if (n != 0)
        {
            productExZero *= n;
        }
        else
        {
            zeroes++;
        }
    }

    if (zeroes > 0)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = zeroes == 1 && nums[i] == 0 ? productExZero : 0;
        }
    }
    else
    {
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = productExZero / nums[i];
        }
    }

    return nums;
}

int main()
{
    return 0;
}