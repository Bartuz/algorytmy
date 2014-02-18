#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
	string score, text = "kryptoanaliza";
	int columns,n;
//	cin >> columns;
	columns = 4;
	n = (text.length() / columns);
	char cipher[columns][n];
	int k = 0;
	for (int i = 0; i < columns; i++) {
		for (int j = 0; k < n; j++) {
			cipher[i][j] = text[k];
			k++;
			if (k > text.length()) break;
		}
	}
	for (int i=0; i< n; i++) {
		for (int j = 0; j < columns; j++) {
			score += cipher[i][j];
		}
	}
	cout << score;
}