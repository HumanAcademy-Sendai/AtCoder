#include <iostream>

using namespace std;

int main(void)
{
    string s;
    cin >> s;

    long long k;
    cin >> k;

    if (k == 1) {
        cout << s[0] << endl;
    }
    else {
        // 1��k�����ȏ����ł��邩?
        // ����ł�����1������
        // ����ł��Ȃ�������A1�̎��ɏo�Ă�������������
        int one_count = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '1')
                ++one_count;
            else
                break;
        }

        if (one_count >= k)
            cout << '1' << endl;
        else
            cout << s[one_count] << endl;
    }    

    return 0;
}