#include <iostream>
#include <cstdlib>
using namespace std;
const int SIZE = 102;
int main(int argc, char *argv[]) {
	int tab[SIZE];
	for (int i = 0; i < SIZE; i++) {
		tab[i] = 1;
	}
	for (int i = 2; i <= SIZE/2; i++) {
		if (tab[i] == 0) {
			cout << "\ncontinue dla i = " << i << endl;
			continue;
		}
		cout << "\nstart dla i = " << i <<  endl;
		for (int j = 2; j <= SIZE/i; j++ ) {
		cout << "\ttab[" << i*j << "]" << endl;
			tab[i*j] = 0;
			}
		cout << "koniec dla i = " << i << endl;
	}
	tab[0] = 0;
	tab[1] = 0;
	cout << "\nwynik: " << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "tab[" << i << "] = " << tab[i] << endl; ;
	}
	cout << "liczby pierwsze to :" << endl;
	for (int i = 0; i < SIZE; i++) {
		if (tab[i]==1) {
			cout << i << " ";
		}
	}
}