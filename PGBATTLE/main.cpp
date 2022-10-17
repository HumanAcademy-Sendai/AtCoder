#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	int answer = 0;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		if (s != "AC")
			answer += 5;
	}

	cout << answer << endl;

	return 0;
}
