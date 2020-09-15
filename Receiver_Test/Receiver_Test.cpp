#define CATCH_CONFIG_MAIN 
#include<iostream>
#include<bits/stdc++.h>
#include "../receiver/receiver.h"
#include "../catch.hpp"

TEST_CASE("Show ERROR when temperature is above the limit") {
        std::environmentCheck e;
        REQUIRE(e.checkHumidity(100)=("ERROR100 Toohigh"));
}
