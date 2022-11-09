/*Napišite program koji s tipkovnice učitava dva cijela broja te ispisuje sve proste brojeve između njih.*/

#include <iostream>
using namespace std;

int main() {

	int prvi, drugi;
	
	cout << "Unesite prvi broj > ";
	cin >> prvi;
	cout << "Unesite drugi broj > ";
	cin >> drugi;
	
	bool brojJeProst;
	int temp;
	
	//uzlazni redoslijed
	if (drugi < prvi) {
	    temp = drugi;
	    drugi = prvi;
	    prvi = temp;
	} 
	
	for (int i = prvi; i <= drugi; i++) {
	    for (int j = 2; j < i; j++) {
	        if (i % j == 0) {
	            brojJeProst = false;
	            break;
	        } else {
	            brojJeProst = true;
	        }
	    }
	    if (brojJeProst) {
	        cout << i << " ";
	    }
	} 
	cout << endl;
	return 0;
}
