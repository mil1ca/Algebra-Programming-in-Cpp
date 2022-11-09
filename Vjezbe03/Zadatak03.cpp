/*Napišite program koji s tipkovnice učitava jedan cijeli broj N te ispisuje sve brojeve od njega do 16*N.*/

#include <iostream>
using namespace std;

int main() {

	int broj;
	
	cout << "Upisite broj > ";
	cin >> broj;
	
	for (int i = broj; i <= 16 * broj; i++) {
	    cout << i << endl;
	}
	return 0;
}
