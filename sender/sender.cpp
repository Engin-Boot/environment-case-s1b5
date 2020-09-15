#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include<sstream>
#include<vector>
#include "sender.h"

using namespace std;

vector<vector<float>> Sender::ParseCSVfile(string filename)
{
    ifstream file;
    file.open(filename);
    vector<vector<float>> Result_Vector;
    string line="";
    string value="";
    while(getline(file,line))
    {
        stringstream str(line);
        vector<float> line_vector;
        while (getline(str,value,','))
        {
            line_vector.push_back(value);
        }
        Result_Vector.push_back(line_vector);    
    }
    file.close();
    return Result_Vector;
}

void Sender::print(vector<vector<float>> Result_Vector)
{
    for(vector<float> vector:Result_Vector)
    {
        for(float value:vector)
        {
            cout<<value<<",";
        }
        cout<<endl;
    }
}

int main()
{
    vector<vector<float>> vector1=Sender::ParseCSVfile("TestData/environment.csv");
    Sender::print(vector1);
    return 0;
}

