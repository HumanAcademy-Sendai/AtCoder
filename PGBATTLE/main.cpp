#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int answer = INT_MAX;
    vector<int> a;
    a.assign(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];

        // 2‚ÅŠ„‚ê‚é‰ñ”‚ğ’²‚×‚é
        int count = 0;
        while (a[i] % 2 == 0) {
            a[i] /= 2;
            ++count;
        }
        answer = min(answer, count);
    }

    cout << answer << endl;

    return 0;
}
