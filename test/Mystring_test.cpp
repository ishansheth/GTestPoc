#include <limits.h>
#include "gtest/gtest.h"
#include "Mystring.hpp"

class MyStringTest : public ::testing::Test{
protected:
  virtual void setUp(){

  }

  virtual void tearDown(){
    
  }
};

TEST(MyStringTest,defctor){
  MyString s;
  EXPECT_STREQ(nullptr,s.c_string());
  EXPECT_EQ(0u,s.Length());
}

TEST(MyStringTest,copyctorTest){
  const char s[] = "hello world!!";
  MyString s1(s);
  EXPECT_EQ(0,strcmp(s1.c_string(),s));
}
