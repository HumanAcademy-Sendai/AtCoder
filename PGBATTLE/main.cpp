#include <iostream>

using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;

    int road[50 + 1]{};
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        ++road[a];
        ++road[b];
    }

    for (int i = 1; i < n; ++i)
        cout << road[i] << endl;

    return 0;
}