#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

class AlertMessage
{
public:
    
    bool raiseAlert(float value, const char* level, const char* message, const char* parameter)
    {
        std::cout << parameter << message << value << " " << level << std::endl;
        return true;
    }
   
};

class environmentCheck
{
private:
    AlertMessage* alerter{};
public:


    void checkTemperature(float value)
    {
        if (value > 37)
            checkTemperatureHigh(value);
        if (value < 4)
            checkTemperatureLow(value);

    }

    void checkTemperatureHigh(float value)
    {
        if (value > 40) {
            bool val_tempH = alerter->raiseAlert(value, "Too high","ERROR", "Temperature");
        }
        else if (value > 37) {
            bool val_tempH = alerter->raiseAlert(value, "High","WARNING", "Temperature");
        }
    }

    void checkTemperatureLow(float value)
    {
        if (value < 0) {
            bool val_tempL = alerter->raiseAlert(value, "Too low","ERROR", "Temperature");
        }
        else if (value < 4) {
            bool val_tempL = alerter->raiseAlert(value, "Low","WARNING", "Temperature");
        }
    }

    void checkHumidity(float value)
    {
        if (value > 90) {
            bool val_tempHD = alerter->raiseAlert(value, "Too high", "ERROR", "Humidity");
        }
        else if (value > 70) {
            bool val_tempHD = alerter->raiseAlert(value, "High", "WARNING", "Humidity");
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
            environmentCheck humid,temp;
            string Temp, Humid;
            getline(str, Temp, ',');
            temp.checkTemperature(stof(Temp));
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
