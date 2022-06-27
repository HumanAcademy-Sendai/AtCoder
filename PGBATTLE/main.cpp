#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	set<int> colors;

	for (int i = 0; i < 3; i++) {
		int color_no;
		cin >> color_no;
		colors.insert(color_no);
	}

	cout << colors.size() << endl;
	// ƒtƒ‰ƒO‚ð—§‚Ä‚é
	//bool colors[100]{ false };
	//for (int i = 0; i < 3; i++) {
	//	int color_no;
	//	cin >> color_no;
	//	colors[color_no] = true;
	//}

	//int count = 0;
	//for (int i = 0; i < 100; i++) {
	//	if (colors[i])
	//		count++;
	//}

	//cout << count << endl;

	// if•¶‚Å”»’è‚·‚é
	//if (a != b && a != c && b != c)
	//	cout << 3 << endl;
	//if ((a == b && a != c)
	// || (a == c && a != b)
	// || (b == c && b != a))
	//	cout << 2 << endl;
	//if (a == b && a == c)
	//	cout << 1 << endl;

	return 0;
}