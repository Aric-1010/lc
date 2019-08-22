//#########################################################################
// Author: wangsuocheng
// Created Time: 2019-08-20 16:34:50
// File Name: 136.cc
// Description: 
//#########################################################################

#include <iostream>
#include <vector>

int singleNumber(std::vector<int>& nums) {
    if (nums.size() <= 0) {
        return -1;
    }
    int ret = 0;
    for (int i=0; i<nums.size(); i++) {
       ret ^= nums[i];
    }
    return ret;
}

int main(){
    std::vector<int> num = {4,2,1,2,1};
    auto ret = singleNumber(num);
    std::cout<< ret << std::endl; 
}
