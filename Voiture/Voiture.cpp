#include "Voiture.hpp"
#include <iostream>
#include <cmath>
using namespace std;
/* <vector>*/
Voiture::Voiture() : posVoiture(0)
{

}
Voiture :: Voiture (std::string _name,float _essences , bool EtatBattery) :name(_name),essences(_essences) , isBatteryLow(EtatBattery)
{

}
Voiture :: Voiture (std::string _name,float _essences , bool EtatBattery , float _distParcourue) : name(_name),essences(_essences) , isBatteryLow(EtatBattery) , distParcourue(_distParcourue)
{
    
}
float Voiture :: getEssence () 
{
    if(this->essences > 0){
        return this->essences;
    }else{
        return 0;
    }
}
bool Voiture :: getEtatBattery() 
{
    return this->isBatteryLow;
}
void Voiture :: mouveCar ( float _dist)
{
     /*
        unité _dist (metre),essences(Litre)
        echelle de calcul consommation de carburants
            _dist = 1000 metre  => essence = .5l 
            _totaldist > 10*4 => isBatteryLow = true;
    */
    float refDist = 1000;
    float refEssence = .5;
    if (this-> essences>0 && this->isBatteryLow == false)
    {
        this->posVoiture = _dist;
        this->distParcourue +=this->posVoiture;
        this->essences -= (_dist * refEssence ) / refDist;
        if(this->distParcourue > pow(10,4))
        {
            this->isBatteryLow = true;
        }
        cout << "Voiture se deplace" << endl;
    }else{
        std::cout << "Le voiture (" << this->name << " )ne peut pas se deplacer " << endl;
    }
}
Voiture::~Voiture()
{

}