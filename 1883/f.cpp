#include <iostream>
#include <map>
#include <vector>
#include <cmath>

int main ()
{
	using namespace std;

	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		vector<int> a;
		map<vector<int>,int> m;
		for (int j = 0; j < n; j++)
		{
			int temp;
			cin >> temp;
			a.push_back(temp);
			for (int k = a.size()-1; k > 0; k--)
			{
				vector<int> sub(a.begin()+k, a.end());
				m[sub]++;
			}
		}
		int count = 0;
		for (const auto& pair : m)
		{
			if (pair.second > 1)
			{
				count += pair.second;
				cout << " sub:" << pair.second << endl;
			}
		}
		int allsubs, ans;
		allsubs = (n*(n+1))/2;
		ans = allsubs - count;
		cout << ans << endl;
	}
}







