#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int array[30] = { 0 };

	int x, r, l;
	cout << "l= ";
	cin >> l;
	cout << "r= ";
	cin >> r;
	cout << "x= ";
	cin >> x;
	for (int i = l - 1; i <= r - 1; i++)
	{
		array[i] += x;
	}
	size_t n = sizeof(array) / sizeof(array[0]);
	for (size_t i = 0; i < n; i++)
	{
		std::cout << array[i] << ' ';
	}
	return 0;
}
