#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <iostream>
#include <vector>
#include "../receiver/receiver.h"
#include "../catch.hpp"


TEST_CASE("Lower value for checkTemperatureHigh") {
    SECTION("Throws error") {
        environmentCheck e;
        REQUIRE_THROWS_AS(e.checkTemperatureHigh(36), std::logic_error);
    }
}
