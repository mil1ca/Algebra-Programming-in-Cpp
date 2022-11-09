/*Ispišite k oliko slova ‘o’ se nalazi u rečenici „Koliko slova o ima u ovoj rečenici?”*/

#include <iostream>
using namespace std;

int main(void) {

	string recenica = "Koliko slova o ima u ovoj recenici?";
	int brojac = 0;
	
	for (int i = 0; i < recenica.length(); i++) {
	    if (recenica[i] == 'o') {
	        brojac++;
	    }
	}
	
	cout << "Recenica ima " << brojac << " slova 0." << endl;
	
	return 0;
}
