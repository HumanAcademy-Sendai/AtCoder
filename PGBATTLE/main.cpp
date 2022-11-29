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
        // 1がk文字以上並んでいるか?
        // 並んでいたら1が答え
        // 並んでいなかったら、1の次に出てきた数字が答え
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