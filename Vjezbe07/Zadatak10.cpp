// Napišite funkciju koja vraća obrnuti broj danog cijelog broja

#include <iostream>
using namespace std;


// Funkcija koja vraća obrnuti broj danog cijelog broja
int reverse_number(int number) 
{
    int reverse = 0;
    
    while (number != 0) 
    {
        reverse = (reverse * 10) + (number % 10);
        number /= 10;
    }
    
    return reverse;
} 


int main(void) 
{
    int broj;
    
    cout << "Unesite broj za obrnuti ispis > ";
    cin >> broj;
    
    cout << "Obrnuti broj je " << reverse_number(broj) << "." << endl;
    
    return 0;
}
