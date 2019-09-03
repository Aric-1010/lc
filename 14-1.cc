//#########################################################################
// Author: wangsuocheng
// Created Time: 2019-09-02 17:40:04
// File Name: 14-1.cc
// Description: 
//#########################################################################

#include <string>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
  string ret = "";
  if (strs.size()== 0)
    return ret;
  auto flag = false;
  for (int i = 0; i < strs[0].size(); ++i) {
    auto cur_str = strs[0][i];
    for (int j = 0; j < strs.size(); ++j) {
      if (strs.size() < i) {
        return ret;
      }
      if (cur_str != strs[j][i]) {
        flag = true;
        break;
      }
    }
    if (!flag)
      ret += cur_str;
    else
      return ret;
  }
  return ret;
}


int main(){
//  int a[] = {0,1,0,3,1,0,1,2,2,1,2,1};
  string a[] = {"flower","flow","flowht"};
  vector<string> v1(a,a+sizeof(a)/sizeof(a[0]));
  vector<string> v2;
  string ret = longestCommonPrefix(v2);
  cout<< ret;
}
