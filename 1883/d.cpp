#include <iostream>
#include <set>
#include <map>

int main()
{
	using namespace std;

	int q, l, r;
	char op;
	set<int> sl, sr;
	map<int, int> ml, mr;

	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> op >> l >> r;
		if (op == '+')
		{
			ml[l]++;
			mr[r]++;
			sl.insert(l);
			sr.insert(r);
		}
		else if (op == '-')
		{
			ml[l]--;
			mr[r]--;
			if (ml[l] == 0)
			{
				sl.erase(l);
			}
			if (mr[r] == 0)
			{
				sr.erase(r);
			}
		}
		if (sl.size() < 2)
		{
			cout << "NO" << endl;
			continue;
		}
		int maxl = *sl.rbegin();
		int minr = *sr.begin();
		if (maxl > minr)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}
