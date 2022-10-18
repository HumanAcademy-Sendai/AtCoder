#include <iostream>

using namespace std;

int main(void)
{
    int w, k, d;
    cin >> w >> k >> d;

    if (d >= std::max(k, w - k))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}