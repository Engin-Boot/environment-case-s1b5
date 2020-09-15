#define CATCH_CONFIG_MAIN
#include "../catch.hpp"
#include "../sender/sender.h"
#include<fstream>
#include<vector>
#include<sstream>

using namespace std;

TEST_CASE("test case for reading csv file that exist")
{
  vector<vector<float>> vector1;
  vector<float> v1={12,43};
  vector<float> v2={45,23};
  vector<float> v3={2,90};
  vector1.push_back(v1);
  vector1.push_back(v2);
  vector1.push_back(v3);
  vector<vector<float>> vector2=Sender::ParseCSVfile("TestData/testdata1.csv");
  REQUIRE(vector2==vector1);
}


TEST_CASE("If the csv file doesnt exist it will return vector<vector<float>> with no values")
{
  vector<vector<float>> vector1;
  vector<float> v1={12,43};
  vector<float> v2={45,23};
  vector<float> v3={2,90};
  vector1.push_back(v1);
  vector1.push_back(v2);
  vector1.push_back(v3);
  vector<vector<float>> vector2=Sender::ParseCSVfile("TestData/testdata2.csv");  //the file does not exist
  REQUIRE(vector2!=vector1);
}
TEST_CASE("If the csv file doesnt exist it will return vector<vector<float>> with no values")
{
  vector<vector<float>> vector1;
  vector<float> v1={12,43};
  vector<float> v2={45,23};
  vector<float> v3={2,90};
  vector1.push_back(v1);
  vector1.push_back(v2);
  vector1.push_back(v3);
  vector<vector<float>> vector2=Sender::ParseCSVfile("TestData/testdata2.csv");  //the file does not exist
  REQUIRE(vector2!=vector1);
}
TEST_CASE("If the csv file doesnt exist it will return vector<vector<float>> with no values")
{
  vector<vector<float>> vector1;
  vector<vector<float>> vector2=Sender::ParseCSVfile("TestData/testdata2.csv");  //the file does not exist
  REQUIRE(vector2=vector1);
}
