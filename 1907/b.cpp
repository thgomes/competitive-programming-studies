#include <iostream>
#include <vector>

int main()
{
	using namespace std;

	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		string s;
		cin >> s;
		vector<int> loweridx, upperidx;
		for(int j = 0; j < s.size(); j++)
		{
			if(s[j] != 'b' && s[j] >= 'a' && s[j] <= 'z')
			{
				loweridx.push_back(j);
			} 
			else if (s[j] != 'B' && s[j] >= 'A' && s[j] <= 'Z')
			{
				upperidx.push_back(j);
			}

			if (s[j] == 'b' && loweridx.size() > 0)
			{ 
				int idx;
				idx = loweridx.back();
				s[idx] = '0';
				loweridx.pop_back();
			}
			else if (s[j] == 'B' && upperidx.size() > 0)
			{ 
				int idx;
				idx = upperidx.back();
				s[idx] = '0';
				upperidx.pop_back();
			}
		}
		for(int j = 0; j < s.size(); j++)
		{
			if(s[j] != '0' && s[j] != 'b' && s[j] != 'B')
			{
				cout << s[j];
			}
		}
		cout << endl;
	}
}


