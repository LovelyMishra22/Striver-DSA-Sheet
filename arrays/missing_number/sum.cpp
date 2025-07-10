#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int sum = n * (n + 1) / 2;
    int sumOfArr = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfArr += nums[i];
    }
    return sum - sumOfArr;
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
