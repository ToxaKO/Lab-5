#include "catch.hpp" 

class Snake()
{
  public:int a=2;
  public:int b=1;
};
int slim(Snake &s){ 

return s.a-s.b; 
} 
TEST_CASE("slim","[slim]"){ 
REQUIRE( slim() == 1 ); 
}

