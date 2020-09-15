#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

class AlertMessage
{
public:   
void raiseAlert(float value, const char* level, const char* message);
};

class environmentCheck
{
public:
void checkTemperatureHigh(float value);
void checkTemperatureLow(float value);
void checkHumidity(float value);
};

