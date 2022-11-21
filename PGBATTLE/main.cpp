#include <iostream>

using namespace std;

int main(void)
{
    string s;
    cin >> s;

    cout << s.rfind('Z', s.length()) - s.find('A', 0) + 1 << endl;

    // 'A'‚ð’T‚·
    //for (idx_a = 0; idx_a < s.length(); ++idx_a) {
    //    if (s[idx_a] == 'A')
    //        break;
    //}

    // 'Z'‚ð’T‚·
    //for (idx_z = s.length() - 1; idx_z >= 0; --idx_z) {
    //    if (s[idx_z] == 'Z')
    //        break;
    //}

    //cout << idx_z - idx_a + 1 << endl;

    return 0;
}