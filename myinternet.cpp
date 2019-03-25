#include <bits/stdc++.h>
using namespace std;


int main () {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	set<int> connect;
	set<int> disconnect;
	vector<int> paira;
	vecotr<int> pairb;
	
	connect.insert(1); // first connected house
	while (m--) {
		int a, b;
		cin >> a >> b;
		if (connect.find(a) != connect.end() || connect.find(b) != connect.end()) {
			connect.insert(a);
			connect.insert(b);
			if (disconnect.find(a) != disconnect.end()) { // if a wasnt connected prev
				disconnect.erase(a);
				if (disconnect.find(b) != disconnect.end()) {//if b wasnt connected prev
					disconnect.erase(b);
				}
			}
			else if (disconnect.find(b) != disconnect.end()) {
				disconnect.erase(b);
			}
		}
		else {
			disconnect.insert(a);
			disconnect.insert(b);
		}
	}
	
	if (disconnect.empty()) {
		cout << "Connected" << endl;
	}
	
	else {
		for (auto &i: disconnect) {
			cout << i << endl;
		}
	}
	return 0;
}