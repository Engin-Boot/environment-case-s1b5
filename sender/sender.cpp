#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include<sstream>
#include<vector>

using namespace std;

void Function()
{
    ifstream file;
    file.open("TestData/environment.csv");
    vector<string> Env_Values;
    while(!file.eof())
    {
        string line="";
        string st="";
        getline(file,line,',');
        Env_Values.push_back(line);
        getline(file,st,'\n');
        Env_Values.push_back(st);
        
    }
    int s=Env_Values.size();
    for(int i=0;i<s;i++)
    {
        cout<<Env_Values[i]<<endl;
    }
}

int main()
{

    Function();
    return 0;
}

