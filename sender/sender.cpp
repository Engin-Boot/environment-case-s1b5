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
    file.open("TestData/environment.csv");
    while(!file.eof()){
        string line="";
        getline(file,line);
        cout<<line<<endl;
    }
       
    
    return 0;
}
