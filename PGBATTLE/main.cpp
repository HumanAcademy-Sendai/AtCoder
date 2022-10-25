#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, q;
    cin >> n >> q;

    vector<bool> back_flag(n + 1, 0);   // false...•\, true...— 
    for (int i = 0; i < q; ++i) {
        int L, R;
        cin >> L >> R;
        for (int j = L; j <= R; ++j)
            back_flag[j] = !back_flag[j];
    }

    int answer = std::count_if(
        back_flag.begin() + 1,
        back_flag.end(),
        [](bool flag) { return flag; }
    );
    cout << answer << endl;

    return 0;
}