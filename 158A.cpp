#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, k, ans = 0;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	int sum = a[k - 1];
	for(int i = 0; i < n; i++)
	{
		if(a[i] >= sum && a[i] > 0)
		{
			ans++;
		}
	}
	cout << ans;
}