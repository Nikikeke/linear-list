#include<iostream>
using namespace std;
int main()
{
	int m = 0, n = 0;
	int _count, m_count;
	int data[300] = { 0 };
	while (cin >> n >> m && m && n)
	{
		for (int i = 0; i < n; ++i)
			data[i] = 1;
		_count = n;
		m_count = 0;
		while (_count > 1) 
		{
			for (int i = 0; i < n; ++i)
				if (1 == data[i])
				{
					m_count++;
					if (0 == m_count % m)
					{
						data[i] = 0;
						_count--;
					}
				}
		}
		for (int i = 0; i < n; ++i)
			if (1 == data[i])
				cout << i + 1 << endl;
	}
	return 0;
}