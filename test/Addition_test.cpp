#include <limits.h>
#include "gtest/gtest.h"
#include "Addition.hpp"

class AdditionTest: public ::testing::Test{
protected:
  virtual void setUp(){

  }

  virtual void tearDown(){
    
  }
};


TEST_F(AdditionTest,twoValues)
{
  const int x = 4;
  const int y = 5;
  
  EXPECT_EQ(9,Addition::twoValues(x,y));
  EXPECT_EQ(10,Addition::twoValues(5,5));
}
