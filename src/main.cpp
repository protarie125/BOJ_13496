#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int k;
	cin >> k;
	for (auto i = 1; i <= k; ++i) {
		int n, s, d;
		cin >> n >> s >> d;

		const auto& maxDist = s * d;

		auto sum = int{ 0 };
		for (auto j = 0; j < n; ++j) {
			int p, q;
			cin >> p >> q;

			if (p <= maxDist) {
				sum += q;
			}
		}

		cout << "Data Set " << i << ":\n"
			<< sum << "\n\n";
	}

	return 0;
}