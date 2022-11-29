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
        // 1‚ªk•¶ŽšˆÈã•À‚ñ‚Å‚¢‚é‚©?
        // •À‚ñ‚Å‚¢‚½‚ç1‚ª“š‚¦
        // •À‚ñ‚Å‚¢‚È‚©‚Á‚½‚çA1‚ÌŽŸ‚Éo‚Ä‚«‚½”Žš‚ª“š‚¦
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