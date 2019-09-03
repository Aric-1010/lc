//#########################################################################
// Author: wangsuocheng
// Created Time: 2019-09-03 14:15:48
// File Name: 15-1.cc
// Description: 
//#########################################################################

#include <string>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
  auto *ret = new vector<vector<int>>;
  std::sort(nums.begin(), nums.end());
  for (int i = 0; i < nums.size(); ++i) {
    auto target = -nums[i];
    int begin = i+1;
    int end = nums.size()-1;
    if (target < 0) {
      continue;
    }
    while (begin < end) {
      if (target > 2*nums[end] || target < 2*nums[begin]){
        break;
      } else if (nums[begin] + nums[end] > target)
        end--;
      else if (nums[begin] + nums[end] < target)
        begin++;
      else {
        vector<int> temp_v(3, 0);
        temp_v[0] = nums[i];
        temp_v[1] = nums[begin];
        temp_v[2] = nums[end];
        ret->push_back(temp_v);
        while(begin<end && nums[begin]==temp_v[1])
          begin++;
        while(begin<end && nums[end]==temp_v[2])
          end--;
      }
    }
    while (i < nums.size()-1 && nums[i] == nums[i+1])
      i++;
  }
  return *ret;
}

//vector<vector<int> > threeSum(vector<int> &num) {
//
//  vector<vector<int> > res;
//
//  std::sort(num.begin(), num.end());
//
//  for (int i = 0; i < num.size(); i++) {
//
//    int target = -num[i];
//    int front = i + 1;
//    int back = num.size() - 1;
//
//    while (front < back) {
//
//      int sum = num[front] + num[back];
//
//      // Finding answer which start from number num[i]
//      if (sum < target)
//        front++;
//
//      else if (sum > target)
//        back--;
//
//      else {
//        vector<int> triplet(3, 0);
//        triplet[0] = num[i];
//        triplet[1] = num[front];
//        triplet[2] = num[back];
//        res.push_back(triplet);
//
//        // Processing duplicates of Number 2
//        // Rolling the front pointer to the next different number forwards
//        while (front < back && num[front] == triplet[1]) front++;
//
//        // Processing duplicates of Number 3
//        // Rolling the back pointer to the next different number backwards
//        while (front < back && num[back] == triplet[2]) back--;
//      }
//
//    }
//
//    // Processing duplicates of Number 1
//    while (i + 1 < num.size() && num[i + 1] == num[i])
//      i++;
//
//  }
//
//  return res;
//
//}






int main(){
  int a[] = {-1, 0, 1, 2, -1, -4};
//  string a[] = {"flower","flow","flowht"};
  vector<int> v1(a,a+sizeof(a)/sizeof(a[0]));
//  vector<string> v2;
  auto ret = threeSum(v1);
//  cout<< ret;
}
