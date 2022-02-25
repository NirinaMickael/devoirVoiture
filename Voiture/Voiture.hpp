#include<string>
class Voiture
{
    private:
        std::string name;
        float essences ;
        bool isBatteryLow;
        float distParcourue;
        float posVoiture;
    public:
    Voiture();
    Voiture (std::string _name,float _essences,bool etatBattery);
    Voiture (std::string _name,float _essences ,bool etatBattery ,float _distParcourue);
    float getEssence();
    bool getEtatBattery();
    void addEssence(float essences);
    void mouveCar(float _dist);
    ~Voiture();
};

