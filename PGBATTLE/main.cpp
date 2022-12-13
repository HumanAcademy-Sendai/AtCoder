#include <iostream>
#include <map>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    long long k;
    cin >> k;

    map<int, long long> number;
    for (int i = 0; i < n; ++i) {
        long long a, b;
        cin >> a >> b;
        number[a] += b;
    }

    for (int i = 1; i < number.size(); ++i) {
        k -= number[i];
        if (k <= 0) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}