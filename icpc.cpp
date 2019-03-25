#include <bits/stdc++.h>
using namespace std;

int main () {
	int N;
	cin >> N;
	while (N--) {
		int teams; cin >> teams;
		deque<int> group;
		int sum = 0;
		for (int i = 0; i < teams * 3; i++) {
			int ppl; cin >> ppl;
			group.push_front(ppl);
		}
		sort(group.begin(), group.end());
		for (int i = 0; i < teams; ++i) {
			group.pop_back();
			sum += group.back();
			group.pop_back();
			group.pop_front();
		}
		cout << sum << endl;
	}
}