#include <iostream>

using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;

    int a, b;
    cin >> a >> b;

    // �S������A?
    if (a * n == m) {
        cout << n << " 0" << endl;
        return 0;
    }

    // �S������B?
    if (b * n == m) {
        cout << "0 " << n << endl;
        return 0;
    }

    // ���̍����Ȃ��ꍇ�͉��Ȃ�
    if ((b - a) == 0) {
        cout << "-1 -1" << endl;
        return 0;
    }

    // �S������A�Ɖ��肵���Ƃ��ɁA
    // ����Ȃ����̐������߂�
    int insufficient = m - a * n;
    if (insufficient % (b - a) != 0) {
        // ����؂�Ȃ��ꍇ�͉��Ȃ�
        cout << "-1 -1" << endl;
        return 0;
    }

    int answer_b = insufficient / (b - a);
    cout << n - answer_b << " " << answer_b << endl;

    return 0;
}
