#include <iostream>
#include <iomanip>

using namespace std;

int factorial(int n);
int combination(int n, int r);

int main(void)
{
	int p;
	cin >> p;

	double win  = p / 100.0;	// Ÿ‚ÂŠm—¦
	double lose = 1.0 - win;	// •‰‚¯‚éŠm—¦

	// 4-0
	double win4_0 = win * win * win * win;
	// 4-1
	double win4_1 = combination(4, 3) * win * win * win * win * lose;
	// 4-2
	double win4_2 = combination(5, 3) * win * win * win * win * lose * lose;
	// 4-3
	double win4_3 = combination(6, 3) * win * win * win * win * lose * lose * lose;

	cout << fixed << setprecision(12);
	cout << (win4_0 + win4_1 + win4_2 + win4_3) * 100.0 << endl;

	return 0;
}

int combination(int n, int r)
{
	int nCr = factorial(n) / (factorial(r) * factorial(n - r));
	return nCr;
}

int factorial(int n)
{
	int answer = 1;
	for (int i = 2; i <= n; i++) {
		answer *= i;
	}

	return answer;
}