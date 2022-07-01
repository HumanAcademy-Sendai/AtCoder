#include <iostream>

using namespace std;

int main(void)
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	cout << max(a * b, c * d) << endl;

	//int ab = a * b;
	//int cd = c * d;
	//if (ab >= cd)
	//	cout << ab << endl;
	//else
	//	cout << cd << endl;

	return 0;
}