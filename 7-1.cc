//#########################################################################
// Author: wangsuocheng
// Created Time: 2019-08-20 16:34:50
// File Name: 136.cc
// Description: 
//#########################################################################

#include <iostream>

int reverse(int x) {
  if (x ==0) return 0;
  int ret = 0;
  while (x != 0) {
    auto num = x%10;
    auto new_ret = ret*10 + num;
    if ((new_ret>INT32_MAX/10||new_ret<INT32_MIN/10) && x/10 != 0)
      return 0;
    ret = new_ret;
    x /= 10;
  }
  return ret;
}

int main(){
    std::cout<< reverse(120) << std::endl;
    std::cout<< reverse(2143847412) <<std::endl;
    std::cout<< reverse(2147483647) <<std::endl;
}
