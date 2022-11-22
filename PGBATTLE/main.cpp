#include <iostream>

using namespace std;

int main(void)
{
    string o;
    cin >> o;

    string e;
    cin >> e;

    for (int i = 0; i < e.length(); ++i) {
        cout << o[i];
        cout << e[i];
    }
    if(o.length() != e.length())
        cout << o[o.length() - 1];
    cout << endl;

    return 0;
}