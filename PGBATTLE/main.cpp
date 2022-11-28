#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int answer = 0;
    for (int i = 1; i <= n; ++i) {
        int a;
        cin >> a;
        //if (i % 2 != 0 && a % 2 != 0)
        if ((i & a & 0x01))
            ++answer;
    }
    cout << answer << endl;

    return 0;
}