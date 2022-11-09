/*Napišite program koji učitava 3 visine studenata, te ispisuje prosječnu visinu.*/

#include <iostream>
using namespace std;

int main(void) {
    
    int visina1, visina2, visina3;
    
    cout << "Unesite visinu 1. studenta > ";
    cin >> visina1;
    cout << "Unesite visinu 2. studenta > ";
    cin >> visina2;
    cout << "Unesite visinu 3. studenta > ";
    cin >> visina3;
    
    cout << "Prosjecna visina 3 studenta je " << (visina1 + visina2 + visina3) / 3.0 << " centrimetara." << endl;
    
    return 0;
}
