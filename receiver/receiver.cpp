#include<iostream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

void Temperature_HIGH(float value)
{
    if(value>40)
        cout<<"Temperature-Error-too high-"<<value<<endl;
    else if(value>37)
        cout<<"Temperature-Warning-high-"<<value<<endl;
}

 

void Temperature_LOW(float value)
{
    if(value<0)
        cout<<"Temperature -Error-too low"<<value<<endl;
    else if(value<4)
        cout<<"Temperature -Warning-low-"<<value<<endl;
}


void Humidity_Limit(float a)
{
if (a> 70 && a < 90)
            cout << "warning  Humidity" << a << endl;
        if (a> 90)
            cout << "Error  Humidity" << a << endl;
}

void Temperature_Check(float value)
{
    if(value>37)
        Temperature_HIGH(value);
    if(value<4)
        Temperature_LOW(value);

}

void ReadValues()
{
    string line="";
    while (getline(cin, line))
    {
        stringstream str(line);
        while(str.good())
        {
            string Temp,Humi;
            getline(str,Temp,',');
            Temperature_Check(stof(Temp));
            getline(str,Humi,'\n');
            Humidity_Limit(stof(Humi));
        }
    }
}

int main()
{
    ReadValues();
    return 0;
}
