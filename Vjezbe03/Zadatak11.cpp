/*Napišite program koji s tipkovnice učitava jedan broj te ispisuje je li on prost.*/

#include <iostream>
using namespace std;

int main() {

	int broj;
	
	cout << "Unesite broj > ";
	cin >> broj;
	
	bool brojJeProst;
	
	for (int i = 2; i < broj; i++) {
	    if (broj % i == 0) {
	        brojJeProst = false;
	        break;
	    } else {
	        brojJeProst = true;
	    }
	}
	
	if (brojJeProst) {
	    cout << "Broj " << broj << " je prost." << endl;
	} else {
	    cout << "Broj " << broj << " nije prost." << endl;
	}
	
	return 0;
}
