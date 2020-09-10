#include<iostream>
#include<string>
using namespace std;
int main()
{
    string line = "";
    getline(cin,line);
    cout<<line<<endl;
    /*cout<<"In receiver main"<<endl;
    while (getline(cin, line))
    {
        if (line == "")
        {
            cout<<"Cin input over"<<endl;
            break;
        }
        cout << "Printing sender message in receiver" << endl;
        cout << line << endl;
    }*/
  return 0;
}
