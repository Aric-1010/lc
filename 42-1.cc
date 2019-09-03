//#########################################################################
// Author: wangsuocheng
// Created Time: 2019-09-02 17:20:53
// File Name: 42.cc
// Description: 
//#########################################################################

#include <string>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;

int trap(vector<int>& height) {
  int i = 0;
  int j = height.size()-1;
  int max_i = 0;
  int max_j = 0;
  int ret = 0;
  while (i<=j) {
    if (height[i] <= height[j]) {
      height[i]>=max_i?max_i=height[i++]:ret+=max_i-height[i++];
    } else {
      height[j]>=max_j?max_j=height[j--]:ret+=max_j-height[j--];
    }
  }
  return ret;
}


int main(){
//  int a[] = {0,1,0,3,1,0,1,2,2,1,2,1};
  int a[] = {2,1,2};
  vector<int> v1(a,a+sizeof(a)/sizeof(a[0]));
  cout<< trap(v1);
}
