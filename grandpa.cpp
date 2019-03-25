#include <bits/stdc++.h>
using namespace std;

int main () {
	int n, q;
	cin >> n;
	string place;
	int num;
	unordered_map<string, vector<int>> country;
	while (n--) {
		cin >>place >> num;
		country[place].push_back(num);
	}
	cin >> q;
	for (auto &i: country) {
		sort(i.second.begin(), i.second.end());
	}
	
	while (q--) {
		cin >> place >> num;
		cout << country[place][num--] << endl;
	}
	return 0;
}