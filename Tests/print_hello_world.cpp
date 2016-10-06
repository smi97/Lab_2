#include <iostream>
#include "../sources/incr.cpp"


TEST_CASE( "Increments are computed", "[increment]" ) {
    REQUIRE( incr(1) == 2 );
    REQUIRE( incr(2) == 3 );
    REQUIRE( incr(3) == 4 );
    REQUIRE( incr(10) == 11 );
}
