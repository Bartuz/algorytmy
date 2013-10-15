#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
	int SIZE; //rozmiar tablicy (odpowiadający liczbom od 1 do SIZE).
	if (argc > 1) { // jeśli liczba argumentów więksa od 1.
		SIZE = strtol(argv[1],NULL,10)+1; // to rozmiar tablicy = argument.
	} else {
		SIZE = 101; // jeśli nie było argumentów to rozmiar = 100.
	}
	int tab[SIZE]; // inicjuję tablice.
	for (int i = 0; i < SIZE; i++) {  
		tab[i] = 1; // wypełniam ją całą w 1.
	}
	for (int i = 2; i <= SIZE/2; i++) {
		if (tab[i] == 0) { // jeśli już ten element został 'wykreślony'
			continue; // pomijam kroki dla danego elementu i.
		}
		for (int j = 2; j <= SIZE/i; j++ ) { // ustawiam mnożnik dla liczenia wielokrotności 'i'. Starczy wykonać liczbe operacji równą SIZE/i. Dla przykładu będziemy liczyć wielokrotności 3 w rozmiarze tablicy '100' dokładnie 33 razy, ponieważ 100/3=33 (int zaokrągla w dół wynik).
			tab[i*j] = 0; // ustawiam wielokrotności na 0.
			}
	}
	tab[0] = 0; // 0 nie jest liczba pierwszą, więc daje 0
	tab[1] = 0; // 1 nie jest liczbą pierwszą, więc daje 0
	ofstream file("result.txt"); // ustawiam plik wyjścia
	for (int i = 0; i < SIZE; i++) {
		if (tab[i]==1) { // jeśli dana liczba nie została wykreślona (index odpowiada liczbie)
			file << i << " "; // to wypisz do pliku ten index.
		}
	}
}