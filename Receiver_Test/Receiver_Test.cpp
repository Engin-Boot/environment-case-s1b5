#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <iostream>
#include <vector>
#include "../receiver/receiver.h"
#include "../catch.hpp"

TEST_CASE("Show ERROR when humidity is above the error-limit.") {
        environmentCheck e;
        string str=e.checkHumidity(100);
        REQUIRE(str== "Humidity Error High");
    }
