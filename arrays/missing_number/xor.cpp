/*
    Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from the array within this range.
    
    Input: nums = [0, 2, 3, 1, 4]
    Output: 5

    Input: nums = [0, 1, 2, 4, 5, 6]
    Output: 3

    TC: O(N) 
    SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int xor1 = 0;

    int xor2 = 0;
    for (int j = 0; j < n; j++)
    {
        xor1 ^= j;
        xor2 ^= nums[j];
    }
    xor1 ^= n;

    return xor1 ^ xor2;
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
    int num = missingNumber(arr);
    cout << num;
    return 0;
}
