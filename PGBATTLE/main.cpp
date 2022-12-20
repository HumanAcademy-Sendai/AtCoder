#include <iostream>
#include <numeric>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    long long answer = 1;
    for (int i = 0; i < n; ++i) {
        long long t;
        cin >> t;
        answer = lcm(t, answer);
    }

    cout << answer << endl;

    return 0;
}
