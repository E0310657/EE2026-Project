#include <bits/stdc++.h>
using namespace std;

int main () {
	map<int,int> jnj;
	int N, M, cd;
	int count = 0;
	
	while (cin >> N >> M, N != 0 && M != 0) {
		while (N--) {
			cin >> cd;
			if (jnj[c == jnj[cd].end())
		}

		while (M--) {
			cin >> cd;
			jnj[cd]++;
		}

		for (auto i : jnj) {
			if (i.second == 2) count++;
		}
	}
	cout << count << endl;
	return 0;
}