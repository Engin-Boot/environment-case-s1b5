#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

void Print(string str);
void ReadValues();

class environmentCheck
{
public:
 
string checkTemperature(float value);
string checkTemperatureHigh(float value);  
void checkTemperatureLow(float value);
void checkHumidity(float value);
};

