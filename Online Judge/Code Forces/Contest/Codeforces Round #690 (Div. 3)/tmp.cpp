#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num, tmp, zev, vov;
	zev=0;
	vov=0;

	cin >> num;

	vector<int> z;
	vector<int> v;

	for(int i=0; i<num; i++)
	{
		cin >> tmp;
		if(tmp%2==0)
		{
			z.push_back(tmp);
			zev+=tmp;
		}
		else
		{
			v.push_back(tmp);
			vov+=tmp;
		}
	}

	sort(z.begin(), z.end());
	sort(v.begin(), v.end());

	for(int i=0; i<z.size(); i++)
	{
		cout << z[i] << " ";
	}
	cout << zev << " ";

	for(int i=0; i<v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << vov << "\n";

	return 0;
}


