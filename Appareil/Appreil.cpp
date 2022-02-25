#include "Radio/Radio.hpp"
#include "Television/Television.hpp"
#include "Appareil.hpp"
#include "./Voiture/Voiture.hpp"
Appareil::Appareil()
{
    radio = Radio();
    television = Television ();
}
Appareil :: Appareil(Radio _radio , bool _batteryState , bool _isON) 
{
    radio = Radio(_batteryState);
    BatteryState = _batteryState;
    isON = _isON;
}
Appareil :: Appareil(Television _television , bool _batteryState , bool _isON) 
{
    Television television = Television(_batteryState);
    BatteryState = _batteryState;
    isON = _isON;
}
Appareil :: Appareil(Television _television , Radio _radio ,bool _batteryState , bool _isON) 
{
    radio = Radio(_batteryState);
    Television television = Television(_batteryState);
    BatteryState = _batteryState;
    isON = _isON ;
}
void Appareil :: AppareilIsOn (Radio _radio ,  float HoursUsingRadio)
{
    _radio.ConsommationBattery(HoursUsingRadio);
      if(_radio.getBatteryState())
    {
        isON = false;
    }
    else
    {
        isON = true;
    }
    this->BatteryState = _radio.getBatteryState();
}
void Appareil :: AppareilIsOn (Television _television , float HoursUsingTel)
{
    _television .ConsommationBattery (HoursUsingTel);
    if(_television.getBatteryState())
    {
        isON = false;
    }
    else
    {
        isON = true;
    }
    this->BatteryState = _television.getBatteryState();
}
void Appareil :: AppareilIsOn (Radio _radio , Television _television , float HoursUsingRadio , float HoursUsingTel)
{
    if(HoursUsingTel >= 5 || HoursUsingRadio >= 7){
        _radio.ConsommationBattery(HoursUsingRadio);
         _television .ConsommationBattery (HoursUsingTel);
         this->BatteryState = _television.getBatteryState() &&  _radio.getBatteryState();
         isON = false;
    }
}
Appareil::~Appareil()
{

}
