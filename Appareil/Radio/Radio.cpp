#include "Radio.hpp"
Radio::Radio()
{
    
}
Radio :: Radio (bool stateBAttery) : isBatteryLow(stateBAttery)
{
    
}
void Radio ::ConsommationBattery(float timeUsingHours ){
   if(timeUsingHours > 8){
       this->isBatteryLow = true;
   } 
}
bool Radio :: getBatteryState ()
{
    return this->isBatteryLow;
}
Radio::~Radio()
{
    
}