//#########################################################################
// Author: wangsuocheng
// Created Time: 2019-08-20 16:34:50
// File Name: 136.cc
// Description: 
//#########################################################################

#include <iostream>
#include <vector>

struct ListNode{
  int val;
  ListNode *next;
  ListNode(){}
  ListNode(int x):val(x), next(nullptr){}
  ListNode* addNode(std::vector<int> arr){
    ListNode *head = nullptr;
    auto *cur = head;
    for (auto i:arr){
      ListNode *p = new ListNode(i);
      if (head == nullptr) {
        head = p;
        cur = p;
        continue;
      }
      cur->next = p;
      cur = cur->next;
    }
    return head;
  }
  void printNode(ListNode* list){
    while (list != nullptr){
      std::cout << list->val;
      list = list->next;
    }
    std::cout << std::endl;
  }

};

int main(){

}
