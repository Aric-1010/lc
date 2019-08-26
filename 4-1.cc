//#########################################################################
// Author: wangsuocheng
// Created Time: 2019-08-20 16:34:50
// File Name: 136.cc
// Description: 
//#########################################################################

#include <iostream>
#include <vector>


double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
    int m = nums1.size();
    int n = nums2.size();
    if (m<n) return findMedianSortedArrays(nums2, nums1);

    int low = 0;
    int high = 2*n;
    while (low<=high){
        int mid2 = (low+high)/2;
        int mid1 = m+n-mid2;
        double L1 = (mid1 <= 0)?INT_MIN:nums1[(mid1-1)/2];
        double L2 = (mid2 <= 0)?INT_MIN:nums2[(mid2-1)/2];
        double R1 = (mid1 >= 2*m)?INT_MAX:nums1[mid1/2];
        double R2 = (mid2 >= 2*n)?INT_MAX:nums2[mid2/2];

        if (L1 > R2)
            low = mid2+1;
        else if (L2 > R1)
            high = mid2-1;
        else
            return (std::max(L1, L2)+std::min(R1,R2))/2;
    }
    return -1;
}

int main(){
  int a[] = {1,2};
  std::vector<int> v1(a,a+sizeof(a)/sizeof(a[0]));
  int b[] = {3,4};
  std::vector<int> v2(b,b+sizeof(b)/sizeof(b[0]));
  auto ret = findMedianSortedArrays(v1,v2);
  std::cout<< ret<< std::endl;
}
