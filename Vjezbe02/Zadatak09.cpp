/*Napišite program koji učitava radijus kružnice te ispisuje njezinu površinu i
opseg (P = r^2ℿ, O = 2rℿ).*/

#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    
    cout << "Izracunavanje povrsine i opsega kruznice." << endl;
    
    float radijus;
    
    cout << "Upisite duljinu radijusa kruznice > ";
    cin >> radijus;
    
    float povrsina, opseg;
    
    povrsina = pow(radijus, 2) * M_PI;
    opseg = 2 * radijus * M_PI;
    
    cout << "Povrsina: " << povrsina << endl;
    cout << "Opseg: " << opseg << endl;
    
    return 0;
}
