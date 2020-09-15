#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include<sstream>
#include<vector>
#include "sender.h"

using namespace std;

vector<vector<string>> sender::Function(string filename)
{
    ifstream file;
    file.open(filename);
    vector<vector<string>> Result_Vector;
    string line="";
    string value="";
    while(getline(file,line))
    {
        stringstream str(line);
        vector<string> line_vector;
        while (getline(str,value,','))
        {
            line_vector.push_back(value);
        }
        Result_Vector.push_back(line_vector);    
    }
    file.close();
    return Result_Vector;
}

void sender::print(vector<vector<string>> Result_Vector)
{
    for(vector<string> vector:Result_Vector)
    {
        for(string value:vector)
        {
            cout<<value<<",";
        }
        cout<<endl;
    }
}

int main()
{
    vector<vector<string>> vector1=Function("TestData/environment.csv");
    print(vector1);
    return 0;
}

