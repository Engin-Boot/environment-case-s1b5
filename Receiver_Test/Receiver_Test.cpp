#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <iostream>
#include <vector>
#include "../receiver/receiver.h"
#include "../catch.hpp"

TEST_CASE("Show ERROR when humidity is above the error-limit.") {
        environmentCheck e;
        REQUIRE(e.checkHumidity(100) == "Humidity Error High");
    }

TEST_CASE("Show WARNING when humidity is above the warning-limit.") {
        environmentCheck e;
        REQUIRE(e.checkHumidity(85) == "Humidity Warning High");
    }

TEST_CASE("If humidity is below the warning-limit, it should not raise alert.") {
        environmentCheck e;
        REQUIRE(e.checkHumidity(60) == "Normal Conditions");
    }

TEST_CASE("Show ERROR when temperature is below the error-limit.") {
        environmentCheck e;
        REQUIRE(e.checkTemperatueLow(-5) == "Temperature Error Low");
    }

TEST_CASE("Show WARNING when temperature is below the warning-limit.") {
        environmentCheck e;
        REQUIRE(e.checkTemperatureLow(2.5) == "Temperature Warning Low");
    }

TEST_CASE("If temperature is above the warning-limit, it should not raise alert.") {
        environmentCheck e;
        REQUIRE(e.checkTemperatureLow(25) == "Normal Conditions");
    }

TEST_CASE("Show ERROR when temperature is above the error-limit.") {
        environmentCheck e;
        REQUIRE(e.checkTemperatureHigh(41) == "Temperature Error High");
    }

TEST_CASE("Show WARNING when temperature is above the warning-limit.") {
        environmentCheck e;
        REQUIRE(e.checkTemperatureHigh(37.3) == "Temperature Warning High");
    }

TEST_CASE("If temperature is below the warning-limit, it should not raise alert.") {
        environmentCheck e;
        REQUIRE(e.checkTemperatureHigh(36.8) == "Normal Conditions");
    }
