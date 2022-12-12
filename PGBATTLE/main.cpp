#include <iostream>
#include <set>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    std::set<int> kuku;
    for (int y = 1; y <= 9; ++y) {
        for (int x = 1; x <= 9; ++x) {
            kuku.insert(x * y);
        }
    }

    if (kuku.count(n) > 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}