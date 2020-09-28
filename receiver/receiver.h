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
string checkTemperatureLow(float value);
string checkHumidity(float value);
};

