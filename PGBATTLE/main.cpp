#include <iostream>

using namespace std;

int main(void)
{
    string s[3];
    cin >> s[0];
    cin >> s[1];
    cin >> s[2];

    // �����ڂ̃J�[�h���g���Ă��邩
    int number[3]{};

    // �N�̃^�[����������
    int turn = 0;   // A�̃^�[������
    while (true) {
        // ��������
        if (number[turn] >= s[turn].length()) {
            cout << (char)('A' + turn) << endl;
            break;
        }

        // �w�����ꂽ�l����ɃJ�[�h���o��
        int card = s[turn][number[turn]];
        ++number[turn];
        turn = card - 'a';
    }

    return 0;
}