#include <iostream>

using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;

    int a, b;
    cin >> a >> b;

    // 全部生物A?
    if (a * n == m) {
        cout << n << " 0" << endl;
        return 0;
    }

    // 全部生物B?
    if (b * n == m) {
        cout << "0 " << n << endl;
        return 0;
    }

    // 足の差がない場合は解なし
    if ((b - a) == 0) {
        cout << "-1 -1" << endl;
        return 0;
    }

    // 全部生物Aと仮定したときに、
    // 足りない足の数を求める
    int insufficient = m - a * n;
    if (insufficient % (b - a) != 0) {
        // 割り切れない場合は解なし
        cout << "-1 -1" << endl;
        return 0;
    }

    int answer_b = insufficient / (b - a);
    cout << n - answer_b << " " << answer_b << endl;

    return 0;
}
