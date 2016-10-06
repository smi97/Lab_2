#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iostream>
#include <print_hello_world.h>

int incr(int a)
{
    return a++;
}

int main(){
    print_hello_world();
}

TEST_CASE( "Increments s are computed", "[increment]" ) {
    REQUIRE( incr(1) == 2 );
    REQUIRE( incr(2) == 3 );
    REQUIRE( incr(3) == 4 );
    REQUIRE( incr(10) == 11 );
}
