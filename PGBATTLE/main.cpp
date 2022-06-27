#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, k, x, y;
	cin >> n >> k >> x >> y;

	int price = min(n, k) * x + max(n - k, 0) * y;
	cout << price << endl;

	return 0;
}