#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int lptr = 0;
    int rptr = 0;
    int curr_len = m;
    while (lptr < n + m && rptr < n)
    {
        int v1 = nums1[lptr];
        int v2 = nums2[rptr];
        if (lptr == curr_len)
        {
            nums1.insert(nums1.begin() + lptr, v2);
            lptr++;
            curr_len++;
            rptr++;
        }
        else if (v1 < v2)
        {
            lptr++;
        }
        else
        {
            nums1.insert(nums1.begin() + lptr, v2);
            curr_len++;
            rptr++;
        }
    }
    nums1.resize(curr_len);
}

int main()
{
    vector<int> nums1{1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2{2, 5, 6};
    int n = 3;

    merge(nums1, m, nums2, n);

    for (auto element : nums1)
        cout << element << " ";
    cout << endl;
    return 0;
}
