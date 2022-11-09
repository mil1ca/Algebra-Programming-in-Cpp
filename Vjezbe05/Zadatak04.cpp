/*Napišite program koji s tipkovnice učitava 10 brojeva u polje, te ispišite to polje
od kraja prema početku odvojene zarezom. Nakon zadnjeg ispisanog broja slijedi točka.*/

#define SIZE 10

#include <iostream>
using namespace std;

int main() {

	int polje[SIZE];
	
	for (int i = 0; i < SIZE; i++) {
	    cout << "Upisite " << i + 1 << ". broj > ";
	    cin >> polje[i];
	}
	
	for (int i = SIZE - 1; i >= 0; i--) {
	    cout << polje[i];
	    if (i == 0) {
	        cout << ".";
	    } else {
	        cout << ", ";
	    }
	}
	return 0;
}
