#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	double digits1 = 0.5 * log10(2.0 * 3.14159265358979323846264 * n);
	double digits2 = n * log10(n / 2.718281828459);
	cout << (int)(digits1 + digits2) + 1 << endl;

	return 0;
}
