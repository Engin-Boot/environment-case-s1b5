#define CATCH_CONFIG_MAIN
#include "../catch.hpp"
#include "../sender/sender.h"
#include<fstream>
#include<vector>
#include<sstream>

using namespace std;

TEST_CASE("test case for reading csv file that exist")
{
  vector<vector<string>> vector1;
  vector<string> v1={"12","43"};
  vector<string> v2={"45","23"};
  vector<string> v3={"2","90"};
  vector1.push_back(v1);
  vector1.push_back(v2);
  vector1.push_back(v3);
  vector<vector<string>> vector2=ParseCSVfile("TestData/testdata1.csv");
  REQUIRE(vector2==vector1);
}
