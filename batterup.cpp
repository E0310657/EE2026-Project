#include <bits/stdc++.h>
using namespace std;

int main () {
	int N; cin >> N;
	int count = 0;
	double sum = 0;
	for (int i = 0; i < N; i++) {
		int b; cin >> b;
		if (b < 0) N--;
		else sum += b;
	}

	cout << sum/(double)N << endl;

	return 0;
}