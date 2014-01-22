#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[]) {
	int denominations[14] = { 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	int counter[14];
	int i = 0;
	int reszta = 8429;
	while (reszta > 0) {
		counter[i] = reszta/denominations[i];
		reszta = reszta%denominations[i]; 
		i++;
	}
	string value = "";
	for (int i = 0; i < 14; i++) {
		if (counter[i] == 0) continue;
		else if (i < 7) {
			value = "zł";
			denominations[i]/=100;
		}
		else {
			value = "gr";
		}
		cout << denominations[i] << value  << " wydano " << counter[i] << " razy" << endl;
	}
}