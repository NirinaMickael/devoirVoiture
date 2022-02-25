class Radio
{
    private:
        bool isBatteryLow;
    public:
        Radio();
        Radio (bool stateBAttery);
        void ConsommationBattery(float timeUsingHours);
        bool getBatteryState ();
        ~Radio();
};

