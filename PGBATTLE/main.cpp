#include <iostream>

using namespace std;

int main(void)
{
    string s[3];
    cin >> s[0];
    cin >> s[1];
    cin >> s[2];

    // 何枚目のカードを使っているか
    int number[3]{};

    // 誰のターンかを入れる
    int turn = 0;   // Aのターンから
    while (true) {
        // 勝利条件
        if (number[turn] >= s[turn].length()) {
            cout << (char)('A' + turn) << endl;
            break;
        }

        // 指名された人が場にカードを出す
        int card = s[turn][number[turn]];
        ++number[turn];
        turn = card - 'a';
    }

    return 0;
}