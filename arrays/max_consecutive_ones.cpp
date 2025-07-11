/*
    Given a binary array nums, return the maximum number of consecutive 1s in the array.

    A binary array is an array that contains only 0s and 1s.

    Input: nums = [1, 1, 0, 0, 1, 1, 1, 0]
    Output: 3

    Input: nums = [0, 0, 0, 0, 0, 0, 0, 0]
    Output: 0

    TC: O(n)
    SC: O(1)
*/

#include <bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int n = nums.size();
    int cnt = 0, maxCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            cnt++;
            maxCount = max(cnt, maxCount);
        }

        else
        {
            cnt = 0;
        }
    }
    return maxCount;
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
    int num = findMaxConsecutiveOnes(arr);
    cout << num<< endl;
    return 0;
}
