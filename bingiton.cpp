#include <bits/stdc++.h>
using namespace std;

int main () {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N; cin >> N;
	unordered_map<string, int> list;
	while (N--) {
		string word; cin >> word;
		int counter = 0;
		if (list.find(word) == list.end()) {
			for (int i = 0; i <word.length() + 1; ++i) {
					list[word.substr(0,i)]++;
					// cout << word.substr(0,i) << endl;
			}
			cout << counter << endl;
		}
		else { 
			counter = list[word];
			for (int i = 0; i <word.length() + 1; ++i) {
					list[word.substr(0,i)]++;
					// cout << word.substr(0,i) << endl;
			}
			cout << counter << endl;
		}
	}
	
	return 0;
}