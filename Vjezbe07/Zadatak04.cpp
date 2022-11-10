// Napišite funkciju koja vraća broj znamenaka cijelog broja.

#include <iostream>
using namespace std;


// Funkcija koja vraća broj znamenaka cijelog broja
int return_digit_number(int digit) 
{
    int counter = 0;
    
    // U slucaju da je unešeni broj 0, ona ima 1 znamenku
    if (digit == 0) 
    {
        counter = 1;
        return counter;
    }
    
    while (digit != 0) 
    {
        counter++;
        digit /= 10;
    }
    
    return counter;
}

int main(void) 
{
    int number;
    
    cout << "Unesite broj za ispis broja znamenki > ";
    cin >> number;
    
    cout << "Ispis:" << endl;
    cout << "Broj znamenki broja " << number << " je " << return_digit_number(number) << "." << endl;
    
    return 0;
}
