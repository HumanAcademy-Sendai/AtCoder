#include <iostream>

using namespace std;

int main(void)
{
	int n, k;
	cin >> n >> k;

	int answer = k;
	for (int i = 0; i < n - 1; i++)
		answer *= (k - 1);
	cout << answer << endl;

	return 0;
}