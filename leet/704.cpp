#include<iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;


int search(vector<int>& nums, int target) {
    int left = 0;
    int rigth = nums.size() - 1; // the size of the list -1 

    while(left <= rigth) {
        int middle = (left + rigth) / 2 ;
        if (nums[middle] > target) {
            rigth = middle - 1;
        } else if (nums[middle] > target){
            left = middle + 1;
        } else {
            return middle;
        }
    }
    return -1;
};







int main()
{   
    vector<int> nums{-1, 0, 3, 5, 9, 12};
    int target = 9;
    int res;

    res = search(nums, target);
    cout << res << endl;
    return res;
}

