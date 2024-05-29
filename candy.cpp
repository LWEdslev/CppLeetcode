#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void update(vector<int>& ratings, vector<int>& candy, int i, int n) {
    int nLrating = i > 0 ? ratings[i-1] : -1;
    int nRrating = i < n - 1 ? ratings[i+1] : -1;
    int nLcandy = i > 0 ? candy[i-1] : -1;
    int nRcandy = i < n - 1 ? candy[i+1] : -1;
    if (ratings[i] > nLrating && candy[i] <= nLcandy) 
        candy[i] = nLcandy + 1;
    if (ratings[i] > nRrating && candy[i] <= nRcandy)
        candy[i] = nRcandy + 1;
}

int candy(vector<int>& ratings) {
    int n = ratings.size();
    vector<int> candy(n, 1);
    for (int i = 0; i < n; i++) {
        update(ratings, candy, i, n);
    }

    for (int i = n-1; i >= 0; i--) {
        update(ratings, candy, i, n);
    }

    return accumulate(candy.begin(), candy.end(), 0);
}

int main() {
    vector<int> ratings = {1,2,87,87,87,2,1};
    

    cout << candy(ratings) << endl;
    return 0;
}
