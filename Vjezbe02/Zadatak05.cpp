/*Napišite program koji za dani troznamenkasti broj ispisuje njegove znamenke. 
Svaka znamenka treba biti ispisana u zasebnom retku. 
Broj unesite direktno u programu.*/

#include <iostream>
using namespace std;

int main() {
    
    int broj = 256;
    int lijeva, srednja, desna;
    
    lijeva = broj / 100;
    srednja = (broj / 10) % 10;
    desna = broj % 10;
    
    cout << "Broj: " << broj << endl;
    cout << "Lijeva znamenka: " << lijeva << endl;
    cout << "Srednja znamenka: " << srednja << endl;
    cout << "Desna znamenka: " << desna << endl;
    
    return 0;
}
