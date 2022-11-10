// Napišite funkciju koja kao parametar prima jedan cijeli broj te vraća sumu brojeva od 1 do primljenog broja.

#include <iostream>
using namespace std;


// Funkcija koja vraća sumu od 1 do primljenog broja
int suma(int number) 
{
    int zbroj = 0;
    
    for (int i = 1; i <= number; i++) 
    {
        zbroj += i;
    }
    
    return zbroj;
} 


int main(void) 
{
    int broj;
    
    cout << "Unesite broj za ispis sume > ";
    cin >> broj;
    
    cout << "Suma brojeva od 1 do " << broj << " je " << suma(broj) << "." << endl;
    
    return 0;
}
