// Napišite funkciju koja ispisuje sumu znamenaka cijelog broja.

#include <iostream>
using namespace std;


// Funkcija koja ispisuje sumu znamenaka cijelog broja
void ispis(int number) 
{
    
    cout << "Suma znamenaka broja " << number << " je ";
    
    int sum = 0;
    int digit;
    
    while (number > 0) 
    {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }
   
    cout << sum << "." << endl;
} 


int main(void) 
{
    int broj;
    
    cout << "Unesite broj za ispis sume znamenaka > ";
    cin >> broj;
    
    ispis(broj);
    
    return 0;
}
