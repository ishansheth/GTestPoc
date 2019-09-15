#include <limits.h>
#include "gtest/gtest.h"
#include <iostream>

int main(int argc, char **argv)
{
  std::cout<<"**********Executing Tests***********"<<std::endl;
  ::testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
}
