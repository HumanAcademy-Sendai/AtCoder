#include <iostream>

using namespace std;

int main(void)
{
    string w;
    cin >> w;

    if (w.length() % 2 != 0) {
        cout << "No" << endl;
        return 0;
    }

    bool odd[26]{};
    for (int i = 0; i < w.length(); ++i)
        odd[w[i] - 'a'] ^= true;

    auto result = std::find(begin(odd), end(odd), true);
    if (result == end(odd))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}