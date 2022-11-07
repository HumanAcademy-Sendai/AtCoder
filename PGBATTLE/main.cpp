#include <iostream>

using namespace std;

int main(void)
{
    string s;
    cin >> s;

    string text;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != 'B') {
            text.push_back(s[i]);
        }
        else {
            if(!text.empty())
                text.pop_back();
        }
    }
    cout << text << endl;

    return 0;
}