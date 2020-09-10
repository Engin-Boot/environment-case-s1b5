#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include<sstream>
#include<vector>

using namespace std;

struct Record
{
    string Temperature;
    string Humidity;
};
int main()
{
    const int ARRAY_SIZE = 100;

    ifstream file;
    file.open("\a.csv");

    struct Record RowArray[ARRAY_SIZE];

    while (!file.eof())
    {
        string Temperature = "";
        string Humidity = "";

        getline(file, Temperature, ',');

        getline(file, Humidity, '\n');

        RowArray[0].Temperature = Temperature;
        RowArray[0].Humidity = Humidity;

        cout << RowArray[0].Temperature << endl;
        cout << RowArray[0].Humidity << endl;

    }
    return 0;
}