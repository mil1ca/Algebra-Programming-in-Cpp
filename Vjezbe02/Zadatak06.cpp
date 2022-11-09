/*Napišite program koji za dani dvoznamenkasti broj (unesen direktno u programu) ispisuje njegov “obrnuti” broj. 
Npr. za broj 42, potrebno je ispisati 24.*/

#include <iostream>
using namespace std;

int main() {
    
    int broj = 25;
    
    int obrnutiBroj = ((broj % 10) * 10) + (broj / 10);
    
    cout << "Broj: " << broj << endl;
    cout << "Obrnuti broj: " << obrnutiBroj << endl;
    
    return 0;
}
