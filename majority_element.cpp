#include <iostream>
#include <vector>

using namespace std;

// time: O(n), space: O(1)
int majorityElement(vector<int> &nums)
{
    int m;
    int c = 0;
    for (auto x: nums)
    {
        if (c == 0)
        {
            m = x;
            c = 1;
        }
        else if (m == x)
        {
            c++;
        }
        else
        {
            c--;
        }
    }

    return m;
}

int main()
{
    vector<int> nums{2,2,1,1,1,2,2};
    cout << "Majority element: " << majorityElement(nums) << endl;
    return 0;
}
