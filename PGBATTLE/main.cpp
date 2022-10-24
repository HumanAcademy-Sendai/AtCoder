#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;
    cin >> s;

    cout << "81" << s.substr(1) << endl;
    //for (int i = 1; i < s.length(); ++i)
    //    cout << s[i];
    //cout << endl;

    return 0;
}