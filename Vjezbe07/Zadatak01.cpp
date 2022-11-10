/*Napišite funkciju koja vraća kvadrat proslijeđenog joj cijelog broja.*/

#include <iostream>
using namespace std;


// Funkcija koja vraća kvadrat
int square(int n) 
{
    return n * n;
}


int main(void) 
{
    int broj;
    
    cout << "Upsite broj ciji kvadrat zelite izracunati > ";
    cin >> broj;
    
    cout << "Kvadrat broja " << broj << " je " << square(broj) << "." << endl;
    
    return 0;
}
