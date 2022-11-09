/*Atletičar baca koplje i iz 5 pokušaja je bacio sljedeće daljine: 92 m, 97 m, 95.4 m, 90.1 m, 96 m. 
Izračunajte prosječnu udaljenost, te standardnu devijaciju bacanja.*/

#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    
    double daljina1 = 92;
    double daljina2 = 97;
    double daljina3 = 95.4;
    double daljina4 = 90.1;
    double daljina5 = 96;
    
    float avgDistance;
    avgDistance = (daljina1 + daljina2 + daljina3 + daljina4 + daljina5) / 5;
    
    double devijacija1 = pow(daljina1 - avgDistance, 2);
    double devijacija2 = pow(daljina2 - avgDistance, 2);
    double devijacija3 = pow(daljina3 - avgDistance, 2);
    double devijacija4 = pow(daljina4 - avgDistance, 2);
    double devijacija5 = pow(daljina5 - avgDistance, 2);
    
    double standDev;
    standDev = sqrt((devijacija1 + devijacija2 + devijacija3 + devijacija4 + devijacija5) / 5);
    
    cout << "Prosjecna udaljenost bacanja je: " << avgDistance << endl;
    cout << "Standardna devijacija je: " << standDev << endl;
    
    return 0;
}
