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
    string line;

    while (!file.eof())
    {
      while(getline(file,line))
            {
                cout<<line<<endl;
            }

    }
    cout<<"1 2 3"<<endl;
    return 0;
}
