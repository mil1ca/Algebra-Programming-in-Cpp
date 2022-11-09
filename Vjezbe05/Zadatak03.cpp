/*Napišite program koji za svaki broj iz polja ispisuje je li on paran ili neparan.*/

#include <iostream>
using namespace std;

int main() {

	int polje[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	for (int i = 0; i < 10; i++) {
	    if (polje[i] % 2 == 0) {
	        cout << polje[i] << " je paran." << endl;
	    } else {
	        cout << polje[i] << " je neparan." << endl;
	    }
	}

	return 0;
}
