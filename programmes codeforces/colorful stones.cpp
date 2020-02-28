#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a, in;
	cin >> a >> in;
	int sum = 1;
	char ref = a[0];
	for (int i = 0; i<in.length(); i++)
	{
		if (in[i] == ref)
		{
			sum++;
			ref = a[sum-1];
		}

	}
	cout << sum;





}
