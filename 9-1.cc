//#########################################################################
// Author: wangsuocheng
// Created Time: 2019-08-20 16:34:50
// File Name: 136.cc
// Description: 
//#########################################################################

#include <iostream>
#include <vector>

bool isPalindrome(int x) {
   if (x < 0) return false;
   auto y = x;
   auto str_x = to_string(x);
   string cp_x;
   for (int i= str_x.size()-1; i >= 0; --i) {
     cp_x = cp_x + str_x[i];
   }
   if (cp_x == str_x){
     return true;
   }
   return false;
}

int main(){
}
