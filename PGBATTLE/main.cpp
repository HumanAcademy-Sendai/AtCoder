#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main(void)
{
    string s;
    cin >> s;

    if (s == "AtCoder")
    {
        cout << "Yes" << endl;
    }
    else
    {
        std::regex  re("AtCoder", std::regex_constants::icase);
        std::smatch m;
        if (std::regex_search(s, m, re))
            cout << "Maybe" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}