#include <iostream>
#include <list>
#include <unordered_map>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <numeric>

using namespace std;

int main() {
	long n, a;
	long cnt = 0;
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}

	for (int i = 1; i < n; i++) {
		if (v[i] < v[i - 1]) {
			cnt += v[i - 1] - v[i];
			v[i] = v[i - 1];
		}
	}

	cout << cnt;
}

