class Television
{
    private:
        bool isBatteryLow;
    public:
        Television();
        Television(bool Statebatery);
        void ConsommationBattery(float timeUsingHours);
        bool getBatteryState();
        ~Television();
};