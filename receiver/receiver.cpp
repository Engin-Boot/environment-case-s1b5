#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<float> ReadValues();
void Humidity(vector<float> v);
void Humidity_Limit(float value);
void Temperature_Check(float f);
void Temperature_HIGH(float f);
void Temperature_LOW(float f2);

int main()
{
    std::vector<float> vector1=ReadValues();
    int size=vector1.size();
    for (int i = 0; i <size; i=i+2)
    {
        Temperature_Check(vector1.at(i));

    }
    Humidity(vector1);
    return 0;
}
void Temperature_Check(float value)
{
    if(value>37)
        Temperature_HIGH(value);
    if(value<4)
        Temperature_LOW(value);

}

vector<float> ReadValues()
{
    vector<float> vector;
    string line="";
    while (getline(cin, line))
    {
        float val = ::atof(line.c_str());
        vector.push_back(val);

    }
    return vector;

}
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

void Humidity(vector<float> v)
{
    int size = v.size();
    for (int j = 1; j < size;j=j+2) {
        Humidity_Limit(v.at(j));
    }
}
 
void Humidity_Limit(float value)
{
if (value> 70 && value < 90)
            cout << "warning  Humidity" << value << endl;
        if (value > 90)
            cout << "Error  Humidity" << value << endl;
}
