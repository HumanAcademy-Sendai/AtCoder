#include <iostream>

using namespace std;

int main(void)
{
	int n, x, a, b;
	cin >> n >> x >> a >> b;

	int answer = 0;// n* (n < x ? a : b);
	if (n < x)
		answer = n * a;
	else
		answer = n * b;
	cout << answer << endl;

	return 0;
}
