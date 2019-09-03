//#########################################################################
// Author: wangsuocheng
// Created Time: 2019-09-03 18:30:37
// File Name: 21.cc
// Description: 
//#########################################################################

#include <string>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <stack>
#include "list.h"

using namespace std;

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
  return nullptr;
}

int main(){
  ListNode temp;
  int a[] = {1, 2, 4};
  vector<int> v1(a,a+sizeof(a)/ sizeof(a[0]));
  int b[] = {1, 3, 4};
  vector<int> v2(b,b+ sizeof(b)/ sizeof(b[0]));
  auto l1 = temp.addNode(v1);
  auto l2 = temp.addNode(v2);
  auto ret = mergeTwoLists(l1,l2);
  temp.printNode(ret);
  temp.printNode(l1);
}
