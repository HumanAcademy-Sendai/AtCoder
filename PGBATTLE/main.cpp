#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	// Aの合計温度を求める
	int sum_a = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		sum_a += a;
	}

	// Aの合計温度から、Bの温度を引く
	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		sum_a -= b;
	}

	if (sum_a > 0)
		cout << "A" << endl;
	else if (sum_a < 0)
		cout << "B" << endl;
	else
		cout << "same" << endl;

	return 0;
}
