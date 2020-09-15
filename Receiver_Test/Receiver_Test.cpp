#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <iostream>
#include <vector>
#include "../receiver/receiver.h"
#include "catch/catch.hpp"


TEST_CASE("Show ERROR when temperature is above the limit") {
        std::environmentCheck e;
        REQUIRE(e.checkHumidity(100)=("ERROR100 Toohigh"));
}
