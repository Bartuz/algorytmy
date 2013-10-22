#include <iostream>
#include <fstream>
using namespace std;
void fillArray(int [], int, int);
int main(int argc, char *argv[]) {
	int n,k,counter,leader,seed;
	ofstream fout("result.txt");
	k = 1;
	switch (argc) {
		case 3:
			n = strtol(argv[1], NULL, 10);
			seed = strtol(argv[2], NULL, 10);
			break;
		case 2:
			n = strtol(argv[1], NULL, 10);
			seed = 3;
			break;
		default:
			n = 10;
			seed = 3;
	}
	int T[n];
	fillArray(T, n, seed);
	leader = T[0];
	for (int i = 1; i < n; i++) {
		if (k==0) {
			k=1;
			leader = T[i];
		}
		if (T[i]==leader) {
			k++;
		} else {
			k--;
		}
	}
	fout << "For an array of [";
	for (int i = 0; i < n; i++) {
		fout << T[i];
		if (i==n-1) {
			fout << "]" << endl;
		} else {
			fout << ", ";
		}
		if (T[i] == leader) {
			counter++;
		}
	}
	if ( (counter <= n/2) || (k==0) ) {
		fout << "There is no leader" << endl;
	} else {
		fout << "Leader is: " << leader << endl;
	}
}
void fillArray(int array[], int numberOfElements,int seed){
	srand(time(NULL));
	for (int i = 0; i < numberOfElements; i++) {
		array[i] = rand() % seed + 1;
	}
}