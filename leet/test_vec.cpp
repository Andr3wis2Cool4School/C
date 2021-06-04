#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{   
    vector<int> nums;
    nums.push_back(10);
    nums.push_back(20);

    int s = nums.size();

    cout << s << endl;


    for (int x: nums)
        cout << x << " ";
    return 0;
}
