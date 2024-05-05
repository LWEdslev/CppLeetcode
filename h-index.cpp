#include <vector>
#include <memory>
#include <optional>
#include <iostream>

using namespace std;

int hIndex(vector<int> &citations)
{
    if (citations.size() == 1 && citations[0] < 1)
        return 0;
    int h = 0;
    int itr = 1;
    while (true)
    {
        int c = 0;
        for (int i = 0; i < citations.size(); i++)
        {
            if (citations[i] > 0)
                c++;

            citations[i]--;
        }
        int l = (c >= itr) ? itr : 0;
        h = max(h, l);
        itr++;
        if (c == 0)
            return h;
    }

    return -1;
}

int main()
{
    vector<int> nums = {2, 3, 1, 1, 4};
    cout << hIndex(nums) << endl;
    return 0;
}