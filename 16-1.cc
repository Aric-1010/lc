//#########################################################################
// Author: wangsuocheng
// Created Time: 2019-09-03 17:49:17
// File Name: 16-1.cc
// Description: 
//#########################################################################

#include <string>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
  std::sort(nums.begin(), nums.end());
  int res=0;
  int min_diff=INT_MAX;
  for (int i = 0; i < nums.size()-2; ++i) {
    auto new_target = target-nums[i];
    int begin = i+1;
    int end = nums.size()-1;
    auto min_diff1 = INT_MAX;
    int begin_end_sum = 0;
    int cur_two_sum = 0;
    while(begin<end-1) {
      begin_end_sum = nums[begin]+nums[end];
      auto cha = abs(begin_end_sum-new_target);
      if (begin_end_sum > new_target) {
        end--;
      } else if (begin_end_sum < new_target) {
        begin++;
      } else {
        break;
      }
      if (cha < min_diff1) {
        cur_two_sum = begin_end_sum;
        min_diff1 = cha;
      }
    }
    int sum = 0;
    if (abs(nums[begin]+nums[end]-new_target) < min_diff1) {
      sum = nums[begin]+nums[end]+nums[i];
    } else {
      sum = cur_two_sum + nums[i];
    }

    if (abs(sum-target)<min_diff) {
      min_diff=abs(sum-target);
      res = sum;
    }
  }
  return res;
}

int main(){
//  int a[] = {-1, 2, 1, -4};
  int a[] = {1, 2, 5, 10, 11, 12};
//  string a[] = {"flower","flow","flowht"};
  vector<int> v1(a,a+sizeof(a)/sizeof(a[0]));
//  vector<string> v2;
  auto ret = threeSumClosest(v1, 16);
  cout<< ret;
}
