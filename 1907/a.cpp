#include <iostream>
#include <string>

int main()
{
	char vcases[] = "abcdefgh";
	using namespace std;
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		string p;
		cin >> p;
		for (int j = 1; j <= 8; j++)
		{
			if (j != p[1] - '0')
			{
				cout << p[0] << j << endl;
			}
		}
		for (int j = 0; j < 8; j++)
		{
			if (vcases[j] != p[0])
			{
				cout << vcases[j] << p[1] - '0' << endl;
			}
		}
	}
}
