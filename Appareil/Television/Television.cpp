#include "Television.hpp"
Television::Television()
{
    isBatteryLow = false ;
}
Television :: Television (bool Statebatery) : isBatteryLow(Statebatery)
{

}
void Television :: ConsommationBattery(float timeUsingHours)
{
    if(timeUsingHours > 5)
    {
        this->isBatteryLow = true ;
    }
}
bool Television :: getBatteryState ()
{
    return this->isBatteryLow;
}
Television::~Television()
{
}
