#include <limits.h>
#include "gtest/gtest.h"
#include "Multiply.hpp"

class MultiplicationTest: public ::testing::Test{
protected:
  virtual void setUp(){

  }

  virtual void tearDown(){
    
  }
};


TEST_F(MultiplicationTest,twoValues)
{
  const int x = 4;
  const int y = 5;
  
  EXPECT_EQ(20,Multiply::twoValues(x,y));
  EXPECT_EQ(25,Multiply::twoValues(5,5));
}
