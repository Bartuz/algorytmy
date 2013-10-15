#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
	int SIZE;
	if (argc > 1) {
		SIZE = strtol(argv[1],NULL,10)+1;
	} else {
		SIZE = 100;
	}
	int tab[SIZE];
	for (int i = 0; i < SIZE; i++) {
		tab[i] = 1;
	}
	for (int i = 2; i <= SIZE/2; i++) {
		if (tab[i] == 0) {
			continue;
		}
		for (int j = 2; j <= SIZE/i; j++ ) {
			tab[i*j] = 0;
			}
	}
	tab[0] = 0; // 0 nie jest liczba pierwszą, więc daje 0
	tab[1] = 0; // 1 nie jest liczbą pierwszą, więc daje 0
	ofstream file("result.txt");
	for (int i = 0; i < SIZE; i++) {
		if (tab[i]==1) {
			file << i << " ";
		}
	}
}