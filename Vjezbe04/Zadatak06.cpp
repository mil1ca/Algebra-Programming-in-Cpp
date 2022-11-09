/*Treba unijeti N prirodnih brojeva (N nije unaprijed poznat!) pa pronaći i ispisati najveći uneseni broj. Za kraj unosa treba unijeti 0.*/

#include <iostream>
using namespace std;

int main(void) {
    
    int prirodanBroj;
    cout << "Za kraj unosa unesite 0." << endl;
    cout << "Unesite prirodan broj > ";
    cin >> prirodanBroj;
    
    int najveci = prirodanBroj;
    
    while (prirodanBroj != 0) {
        cout << "Unesite prirodan broj > ";
        cin >> prirodanBroj;
        if (prirodanBroj > najveci) {
            najveci = prirodanBroj;
        }
    }
    
    cout << "Najveci uneseni prirodan broj je " << najveci << "." << endl;
    
	return 0;
}
