#define CATCH_CONFIG_MAIN 

#include<iostream>
#include "../catch.hpp"
#include "../receiver/receiver.h"

TEST_CASE("Negative value for checkHumidity") {
    SECTION("Throws error") {
        std::environmentCheck e;
        REQUIRE_THROWS_AS(e.checkHumidity(-5), std::logic_error);
    }
}
