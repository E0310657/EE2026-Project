#include <bits/stdc++.h>
using namespace std;

int main () {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N;
	cin >> N;
	cin.ignore();
	set<string> places;
	while (N--) {
		string phrase;
		getline(cin, phrase);
		string token;
		stringstream ss(phrase);
		ss >> token;
		if (token == "SINGAPORE") {
			while (ss >> token) {
				places.insert(token);
			}
		}
	}
	
	for (auto &i:places) {
		cout << i << endl;
	}

	return 0;
}