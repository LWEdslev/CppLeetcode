#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <numeric>

using namespace std;

// time: O(n * max(height)), space: O(1)
int trap(vector<int>& height) {
    int l = 0;
    int r = height.size() - 1;
    int area = 0;
    int height_track = 0;
    while (l != r || height[l] > height_track) {
        int l_val = height[l];
        int r_val = height[r];

        if (l_val <= height_track) {
            l++;
            continue;
        }

        if (r_val <= height_track) {
            r--;
            continue;
        }

        area += r - l + 1;
        height_track++;
    }

    return area - accumulate(height.begin(), height.end(), 0);
}

int main() {
    vector<int> height = {4,2,0,3,2,5};
    cout << "Expected " << 9 << " got " << trap(height) << endl;
    return 0;
}