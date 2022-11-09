/*Napišite program koji u jednu varijablu sprema broj 10, u drugu broj 25, te ispisuje sumu, umnožak, razliku te kvocijent tih brojeva. 
Ispis formatirati tako da svaki ispis bude u svom retku, te se ispisuju i operandi i operator. 
Npr. za umnožak je potrebno ispisati: “10 * 25 = 250”.*/

#include <iostream>
using namespace std;

int main(void) {
	
	int x = 10;
	int y = 25;

	cout << x << " + " << y << " = " << x + y << endl;
	cout << x << " * " << y << " = " << x * y << endl;
	cout << x << " - " << y << " = " << x - y << endl;
	cout << x << " / " << y << " = " << x / y << endl;

	return 0;
}
