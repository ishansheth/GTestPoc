#include "Mystring.hpp"

#include <string>

const char* MyString::clonestring(const char* str){

  if(str == nullptr)
    return nullptr;

  const size_t len = strlen(str);
  char* const clone = new char[len+1];
  memcpy(clone,str,len+1);

  return clone;
}

void MyString::Set(const char* a_c){
  const char* const temp = MyString::clonestring(a_c);
  delete[] c_string_;
  c_string_ = temp;
}
