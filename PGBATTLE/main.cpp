#include <iostream>

using namespace std;

int main(void)
{
    int n, k;
    cin >> n >> k;

    long long int second = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a > k)
            second += a - k;
    }

    cout << second << endl;

    return 0;
}