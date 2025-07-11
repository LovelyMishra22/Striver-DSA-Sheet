/*
    Given an array of nums of n integers. Every integer in the array appears twice except one integer. Find the number that appeared once in the array.

    Input : nums = [1, 2, 2, 4, 3, 1, 4]
    Output : 3

    Input : nums = [5]
    Output : 5

    TC: O(n)
    SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int> &nums)
{
    int n = nums.size();
    int xorr = 0;
    for (int i = 0; i < n; i++)
    {
        xorr ^= nums[i];
    }
    return xorr;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num = singleNumber(arr);
    cout << num << endl;
    return 0;
}
