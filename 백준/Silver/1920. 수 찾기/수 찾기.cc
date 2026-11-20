#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	vector<int> arr(T);
	for (int i = 0; i < T; i++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;

		if (binary_search(arr.begin(), arr.end(), a)) {
			cout << 1 << '\n';
		}
		else {
			cout << 0 << '\n';
		}
	}
	return 0;
}