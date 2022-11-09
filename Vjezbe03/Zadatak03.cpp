/*Napišite program koji s tipkovnice učitava jedan cijeli broj N te ispisuje sve brojeve od njega do 16*N.*/

#include <iostream>
using namespace std;

int main() {

	int broj;
	
	cout << "Upisite broj > ";
	cin >> broj;
	
	int zadnjiBroj = 16 * broj;
	
	while (broj <= zadnjiBroj) {
	    cout << broj << endl;
	    broj++;
	}
	
	return 0;
}
