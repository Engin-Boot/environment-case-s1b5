#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

class AlertMessage
{
public:
    
    void raiseAlert(float value, const char* level, const char* message)
    {
        std::cout << message << value << " " << level << std::endl;
    }
   
};

class environmentCheck
{
private:
    AlertMessage* alerter{};
public:

    environmentCheck(){}

    explicit environmentCheck(float value)
    {
        if (value > 37)
            checkTemperatureHigh(value);
        if (value < 4)
            checkTemperatureLow(value);

    }

    void checkTemperatureHigh(float value)
    {
        if (value > 40) {
            alerter->raiseAlert(value, "Too high","ERROR");
        }
        else if (value > 37) {
            alerter->raiseAlert(value, "High","WARNING");
        }
    }

    void checkTemperatureLow(float value)
    {
        if (value < 0) {
            alerter->raiseAlert(value, "Too low","ERROR");
        }
        else if (value < 4) {
            alerter->raiseAlert(value, "Low","WARNING");
        }
    }

    void checkHumidity(float value)
    {
        if (value > 70)
        {
            if (value > 90)
            alerter->raiseAlert(value, "Too high","ERROR");
            alerter->raiseAlert(value, "High","WARNING");
        }
    }
};

void ReadValues()
{
    string line = "";
    while (getline(cin, line))
    {
        stringstream str(line);
        while (str.good())
        {
            environmentCheck humid;
            string Temp, Humid;
            getline(str, Temp, ',');
            environmentCheck temp(stof(Temp));
            getline(str, Humid, '\n');
            humid.checkHumidity(stof(Humid));
        }
    }
}

int main()
{
    ReadValues();
    return 0;
}
