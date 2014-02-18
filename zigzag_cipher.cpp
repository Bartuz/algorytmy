#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
	string score, text = "kot";
	int columns,chars_per_line;
//	cin >> columns;
	columns = 2;
	chars_per_line = (text.length() / columns) + 1;
	char cipher[columns][chars_per_line];
	int k = 0;
	for (int i = 0; i < columns; i++) {
		for (int j = 0; j < chars_per_line; j++) {
			cipher[i][j] = text[k];
			k++;
		}
	}
	for (int i = 0; i < chars_per_line; i++) {
		for (int j = 0; j < columns; j++) {
			score += cipher[j][i];
		}
	}
	cout << score;
}