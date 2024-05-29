#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
    int n=gas.size();
    int index=0;
    int balance=0;
    int rent=0;

    for(int i=0;i<n;i++){
        if(cost[i]>gas[i]+balance){
            index=i+1;
            rent+=-cost[i]+gas[i]+balance;
            balance=0;
        }else{
            balance+=(gas[i]-cost[i]);
        }
    }
    return rent+balance>=0?index:-1;
}

int main()
{
    vector<int> gas = {5,1,2,3,4};
    vector<int> cost = {4,4,1,5,1};
    cout << canCompleteCircuit(gas, cost) << endl;
    return 0;
}