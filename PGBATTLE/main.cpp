#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	int x, y, k;
	cin >> x >> y >> k;

	//double answer = ((double)x * y - k) / x;
	double answer = y - (double)k / x;
	cout << std::setprecision(15);
	cout << answer << endl;

	return 0;
}