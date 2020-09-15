#define CATCH_CONFIG_MAIN
#include "../catch.hpp"
#include "..sender/sender.h"
#include<fstream>
#include<vector>
#include<sstream>

using namespace std;

TEST_CASE("test case for reading csv file that exist")
{
  vector<vector<string>> vector1;
  vector<string> v1={"12","43"}
  vector<string> v2={"45","23"}
  vector<string> v3={"2","90"}
  vector1.pushback(v1);
  vector2.pushback(v2);
  vector3.pushback(v3);
  
  REQUIRE(Sender::ParseCSVfile("TestData/testdata1.csv)==vector1);
                               }
