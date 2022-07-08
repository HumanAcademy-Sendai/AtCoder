#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	int price = 800 * n;
	int back  = (n / 15) * 200;
	cout << price - back << endl;

	// cout << 800 * n - (n / 15) * 200 << endl;

	return 0;
}