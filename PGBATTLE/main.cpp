#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	std::vector<int> count(n + 1, 0);
	for (int i = 0; i < n - 1; ++i) {
		int a, b;
		cin >> a >> b;
		++count[a];
		++count[b];
	}
	count[1] = 0;	// •”‰®1‚ÍœŠO

	std::erase_if(
		count,
		[](int x){ return x != 1; }
	);
	cout << count.size() << endl;

	return 0;
}
