#define CATCH_CONFIG_MAIN 

#include<bits/stdc++.h>

#include "../catch.hpp"
#include "../receiver/receiver.h"

TEST_CASE("Show ERROR when temperature is above the limit") {
        std::environmentCheck e;
        REQUIRE(e.checkHumidity(100)=("ERROR100 Toohigh"));
}
