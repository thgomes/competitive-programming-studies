#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solution()
{
    long long n, a;
    vector<long long> nums;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> a;
        nums.push_back(a);
    }
    sort(nums.begin(), nums.end());
    nums.resize(unique(nums.begin(), nums.end()) - nums.begin());
    int pnt = 0, ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        while (nums[i] - nums[pnt] >= n)
        {
            pnt++;
        }
        ans = max(ans, i - pnt + 1);
    }
    cout << ans << endl;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}