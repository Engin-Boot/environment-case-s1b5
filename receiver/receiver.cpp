#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main()
{
    string line = "";
    std::vector<float> vector;
    cout << "In receiver main" << endl;
    while (getline(cin, line))
    {
        if (line == "")
        {
            cout << "Cin input over" << endl;
            break;
        }
        cout << "Printing sender message in receiver" << endl;
        float val = std::stof(line);
        vector.push_back(val);

    }
    for (auto i = vector.begin(); i != vector.end(); i++)
    {
        cout << *i << endl;
    }



    return 0;
}
