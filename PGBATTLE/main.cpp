#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(void)
{
	long long n;
	cin >> n;

	cout << "0.";

	string str2n = to_string(1LL << n);
	for (int i = 0; i < n - str2n.length(); ++i)
		cout << '0';

	cout << str2n << endl;

	return 0;
}
