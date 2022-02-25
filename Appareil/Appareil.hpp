#include "Radio/Radio.hpp"
#include "Television/Television.hpp"
#include "./Voiture/Voiture.hpp"
class Appareil
{
    private:
        Radio radio;
        Television television;
        bool BatteryState;
        bool isON;
    public:
    Appareil();
    Appareil(Radio _radio , bool _batteryState , bool _isON);
    Appareil(Television _television , bool _batteryState , bool _isON);
    Appareil(Television _television , Radio _radio ,bool _batteryState , bool _isON);
    void AppareilIsOn(Radio _radio , float HoursUsingRadio);
    void AppareilIsOn(Television _television , float HoursUsingTel);
    void AppareilIsOn(Radio _radio ,Television _televison ,  float HoursUsingRadio , float HoursUsingTel);
    ~Appareil();
};