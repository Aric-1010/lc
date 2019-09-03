//#########################################################################
// Author: wangsuocheng
// Created Time: 2019-09-03 18:06:59
// File Name: 20-1.cc
// Description: 
//#########################################################################

#include <string>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <stack>

using namespace std;

bool isValid(string s) {
  stack<char> st;
  for(auto n : s) {
    if (n == 40 || n == 123 || n==91)
      st.push(n);
    else {
      if (st.size()==0) {
        return false;
      }
      auto r = st.top();
      st.pop();
      switch (r) {
        case 40: {
          if (n!=41)
            return false;
          break;
        }
        case 123: {
          if (n!=125)
            return false;
          break;
        }
        case 91: {
          if (n!=93)
            return false;
        }
      }
    }
  }
  return st.size() == 0;
}

int main(){
//  int a[] = {1, 2, 5, 10, 11, 12};
//  string a[] = {"flower","flow","flowht"};
//  vector<int> v1(a,a+sizeof(a)/sizeof(a[0]));
// ( 40 ) 41 { 123 } 125 [ 91 ] 93
  auto ret = isValid("");
  cout<< ret;
}
