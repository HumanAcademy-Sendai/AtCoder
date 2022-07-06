#include <iostream>

using namespace std;

int main(void)
{
	int a, b;
	cin >> a >> b;

	a += (a == 1) * 13;
	b += (b == 1) * 13;
	//if (a == 1)	a += 13;
	//if (b == 1)	b += 13;

	if (a > b)
		cout << "Alice" << endl;
	else if (b > a)
		cout << "Bob"   << endl;
	else
		cout << "Draw"  << endl;

	return 0;
}