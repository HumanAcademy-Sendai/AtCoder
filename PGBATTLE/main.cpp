#include <iostream>

using namespace std;

int main(void)
{
    enum COLORS {
        GRAY, BROWN,  GREEN,  LIGHTBLUE,
        BLUE, YELLOW, ORANGE, RED,
        FREE,
    };

    int n;
    cin >> n;

    int colors[9]{};
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        const int index = a / 400;
        if(index < FREE)
            colors[index] = 1;
        else
            ++colors[FREE];
    }

    int answer = 0;
    for (int i = 0; i < FREE; ++i)
        answer += colors[i];

    cout << answer << " " << answer + colors[FREE] << endl;

    return 0;
}