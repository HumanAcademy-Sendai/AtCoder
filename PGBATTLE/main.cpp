#include <iostream>

using namespace std;

int main(void)
{
	char a, b;
	cin >> a >> b;

	if (a == b)
		cout << "H" << endl;
	else
		cout << 'D' << endl;

	//if (a == 'H' && b == 'H')
	//	cout << 'H' << endl;
	//else if (a == 'H' && b == 'D')
	//	cout << 'D' << endl;
	//else if (a == 'D' && b == 'H')
	//	cout << 'D' << endl;
	//else if (a == 'D' && b == 'D')
	//	cout << 'H' << endl;

	return 0;
}