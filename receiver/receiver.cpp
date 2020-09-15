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
        std::cout << message << " " << value << " " << level << std::endl;
    }
   
};

class environmentCheck
{
private:
    AlertMessage* alerter{};
public:

    explicit environmentCheck(){}

    explicit environmentCheck(float value)
    {
        if (value > 37)
            checkTemperatureHigh(value);
        if (value < 4)
            checkTemperatureLow(value);
    }

    bool checkTemperatureHigh(float value)
    {
        if (value > 40) {
            alerter->raiseAlert(value, "Too high","ERROR");
            return true;
        }
        else if (value > 37) {
            alerter->raiseAlert(value, "High","WARNING");
            return true;
        }
        return false;
    }

    bool checkTemperatureLow(float value)
    {
        if (value < 0) {
            alerter->raiseAlert(value, "Too low","ERROR");
            return true;
        }
        else if (value < 4) {
            alerter->raiseAlert(value, "Low","WARNING");
            return true;
        }
        return false;
    }

    bool checkHumidity(float value)
    {
        if (value > 70)
        {
            if (value > 90)
            {
                alerter->raiseAlert(value, "Too high","ERROR");
                return true;
            }
            alerter->raiseAlert(value, "High","WARNING");
            return true;
        }
        return false;
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
