#include <bits/stdc++.h>
using namespace std;

int main () {
	int h, v; cin >> h >> v;
	int length = ceil(h / (double)sin(v));
	cout << length << endl;
	return 0;
}