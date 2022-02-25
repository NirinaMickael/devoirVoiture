#include "Voiture/Voiture.hpp"
#include "Appareil/Radio/Radio.hpp"
#include "Appareil/Television/Television.hpp"
#include <iostream>
using namespace std;
/*<>*/
int main ()
{
    cout << boolalpha; /*c'est un manipulateur*/
    Voiture voiture1 = Voiture ("Bmw",4,false);
    return 0;
}