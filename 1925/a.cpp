#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void solve(int n, int k)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << char('a' + j);
		}
	}
	cout << endl;
}

int main()
{
	int t, n, k;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> k;
		solve(n, k);
	}
}