#include <iostream>
using namespace std;
int main()
{
	int x;
	int maxs = 0;
	int mins = 100000;
	int sum = 0;
	cout << "x= ";
	cin >> x;
	int* array = new int[x];
	for (int i = 0; i < x; ++i)
	{
		cin >> array[i];
	}
	for (int i = 0; i < x; ++i)
	{
		sum += array[i];
		maxs = max(sum - mins, maxs);
		mins = min(mins, sum);
	}
	cout << maxs;
	return 0;
}
