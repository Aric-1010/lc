//#########################################################################
// Author: wangsuocheng
// Created Time: 2019-09-02 15:50:48
// File Name: 11.cc
// Description: 
//#########################################################################

#include <string>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;

int maxArea(vector<int>& height) {
  if (height.size() <= 1) {
    return 0;
  }
  int i = 0;
  int j = height.size()-1;
  int ret = 0;
  while (i<=j) {
    ret = max(ret, (j-i)*min(height[i],height[j]));
    height[j]>height[i]?i++:j--;
  }
  return ret;
}


int main(){
  int a[] = {1,8,6,2,5,4,8,3,7};
  vector<int> v1(a,a+sizeof(a)/sizeof(a[0]));
  cout<< maxArea(v1);
}
