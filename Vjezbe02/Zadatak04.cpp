/*Napišite program koji za dani dvoznamenkasti broj ispisuje njegovu lijevu i desnu znamenku. 
Svaka znamenka treba biti ispisana u zasebnom retku. Broj unesite direktno u programu.*/

#include <iostream>
using namespace std;

int main() {
    
    int broj = 20;
    
    int lijevaZnamenka, desnaZnamenka;
    lijevaZnamenka = broj / 10;
    desnaZnamenka = broj % 10;
    
    cout << "Broj: " << broj << endl;
    cout << "Lijeva znamenka: " << lijevaZnamenka << endl;
    cout << "Desna znamenka: " << desnaZnamenka << endl;
    
    return 0;
}
