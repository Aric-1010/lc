//#########################################################################
// Author: wangsuocheng
// Created Time: 2019-08-20 16:34:50
// File Name: 136.cc
// Description: 


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

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    if (l1 == nullptr || l2 == nullptr) {
        return nullptr;
    }
    ListNode *list_ret = new ListNode(0);
    ListNode *p = list_ret;
    bool flag = false;
    while (l1 != nullptr || l2 != nullptr){
        int sum = 0;
        if (flag == true){
            sum += 1;
            flag = false;
        }
        if (l1 != nullptr){
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != nullptr){
            sum += l2->val;
            l2 = l2->next;
        }
        if (sum >= 10) {
            sum -= 10;
            flag = true;
        }
        ListNode *cur_node = new ListNode(sum);
        p->next = cur_node;
        p = p->next;
    }
    if (flag == true){
        p->next = new ListNode(1); 
    }
    return list_ret->next;
}

int main(){

}
