#include <iostream>

int main()
{
	using namespace std;

	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n, curr, last = 0, count = 0;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> curr;
			while (curr < last)
			{
				curr *= 2;
				count++;
			}
			last = curr;
		}
		cout << count << endl;
	}
}
