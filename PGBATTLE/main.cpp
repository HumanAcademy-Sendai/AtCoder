#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int candy[3];
	cin >> candy[0] >> candy[1] >> candy[2];

	sort(begin(candy), end(candy));
	if(candy[2] == candy[0] + candy[1])
		cout << "Yes" << endl;
	else
		cout << "No"  << endl;

	//int a, b, c;
	//cin >> a >> b >> c;

	//if (a == b + c || b == a + c || c == a + b)
	//	cout << "Yes" << endl;
	//else
	//	cout << "No"  << endl;

	return 0;
}