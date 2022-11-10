// Napišite funkciju koja vraća istinu ako je proslijeđeni broj palindroman.

#include <iostream>
using namespace std;

// Funkcija koja vraća istinu ako je proslijeđeni broj palindroman
bool palindrome(int number) 
{
    bool is_palindrome = false;
    int reverse = 0;
    int num = number;
    
    // Obrnuti redoslijed znamenke
    while (number != 0) 
    {
        reverse = (reverse * 10) + (number % 10);
        number /= 10;
    }
    
    // Usporedba
    if (num == reverse) 
    {
        is_palindrome = true;
    }
    
    return is_palindrome;
} 

int main(void) 
{
    int broj;
    
    cout << "Unesite broj da provjerite da li je palindroman > ";
    cin >> broj;
    
    bool jeste_palindroman = palindrome(broj);
    
    if (jeste_palindroman) 
    {
        cout << "Broj je palindroman." << endl;
    } 
    else 
    {
        cout << "Broj nije palindroman." << endl;
    }
    
    return 0;
}
