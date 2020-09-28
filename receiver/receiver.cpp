#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

class environmentCheck
{
public:
    string checkTemperature(float value)
    {
        if (value > 37)
            string temp=checkTemperatureHigh(value);
            return temp;
        if (value < 4)
            string temp=checkTemperatureLow(value);
            return temp;
        return "Normal Conditions";
    }

    string checkTemperatureHigh(float value)
    {
        if (value > 40) {
            return "Temperature Error High";
        }
        else if (value > 37) {
            return  "Temperature Warning High";
        }
        return "Normal Conditions";
    }

    void checkTemperatureLow(float value)
    {
        if (value < 0) {
            return "Temperature Error Low";
        }
        else if (value < 4) {
            return "Temperature Warning Low";
        }
        return "Normal Conditions"; 
    }

    void checkHumidity(float value)
    {
        if (value > 90) {
            return "Humidity Error High";
        }
        else if (value > 70) {
            return "Humidity Warning High";
        }
        return "Normal Conditions";
    }
};

void Print(string str)
{
    if(str!="Normal Conditions")
    {
        cout<<str<<endl;
    }

}
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
            string temp_HL=temp.checkTemperature(stof(Temp));
            Print(temp_HL);
            getline(str, Humid, '\n');
            string humid_H=humid.checkHumidity(stof(Humid));
            Print(humid_H);
        }
    }
}

int main()
{
    ReadValues();
    return 0;
}
