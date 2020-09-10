#include<iostream>
#include<string>
#include<vector>
using namespace std;

void Temperature(vector<float> v);
void Humidity(vector<float> v);

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

    Temperature(vector);
    Humidity(vector);

    return 0;
}


void Temperature(vector<float> v)
{
    vector<float>::iterator i;
    for (i = v.begin(); i != v.end(); i=i+2)
    {
        if((*i < 4 && *i>0) || (*i > 37 && *i<40))
            cout << "warning  temperature" << " " <<*i<< endl;
        if (*i < 0 || *i > 40)
            cout << "Error  Temperature" << " " <<*i<< endl;
    }
}

void Humidity(vector<float> v)
{
    int size = v.size();
    for (int j = 1; j < size;j=j+2) {
        if (v.at(j)> 70 && v.at(j) < 90)
            cout << "warning  Humidity" << " " << v.at(j) << endl;
        if (v.at(j)> 90)
            cout << "Error  Humidity" << " " << v.at(j) << endl;
    }
}
