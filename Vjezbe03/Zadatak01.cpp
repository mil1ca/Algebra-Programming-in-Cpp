/*Napišite program koji s tipkovnice učitava jedan broj te ispisuje je li on paran ili ne.*/

#include <iostream>
using namespace std;

int main() {

	int broj;
	
	cout << "Upisite broj > ";
	cin >> broj;
	
	if (broj % 2 == 0) {
	    cout << "Broj je paran." << endl;
	} else {
	    cout << "Broj je neparan." << endl;
	}
	
	return 0;
}
