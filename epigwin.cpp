#include <bits/stdc++.h>
using namespace std;

int main () {
	int row, col;
	cin >> row >> col;
	string dance[row];
	int count = 0;
	for (int i = 0; i < row; ++i) {
		string arr;
		getline(cin, arr);
		dance[i] = arr;
	}
		string arr;
		getline(cin, arr);
		dance[row - 1] = arr;
	
	for (int j = 1; j < col - 1; ++j) {
		bool isBlank = true;
		for (int i = 1; i < row; ++i) {
			if (dance[i][j] == '$') 
				isBlank = false;
		}
		if (isBlank) count++;
	}
	
	cout << ++count << endl;
}