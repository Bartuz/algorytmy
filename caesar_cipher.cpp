#include <iostream>

using namespace std;
char get_moved_char_in_ascii(char, int);
int main(int argc, char *argv[]) {
	string cipher, text = "anaflabeta";
	int key = 25;
	for (int i = 0; i < text.length(); i++) {
		cipher += get_moved_char_in_ascii(text[i], key);
	}
	cout << cipher;
}
char get_moved_char_in_ascii(char a, int k){
	return char(((int(a) + k) - 97)%26 + 97);
}