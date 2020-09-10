#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include<sstream>
#include<vector>

using namespace std;

int main()
{
    ifstream file;
    file.open("TestData\environment.csv");

    while (!file.eof())
    {
        string Temperature = "";
        string Humidity = "";

        getline(file, Temperature, ',');

        getline(file, Humidity, '\n');

        cout << Temperature << endl;
        cout << Humidity << endl;

    }
    return 0;
}
