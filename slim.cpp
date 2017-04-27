#include "catch.hpp" 


int slim(){ 
int a=2;
  int b=1;
} 
TEST_CASE("slim"){ 
REQUIRE( slim() == 1); 
}

