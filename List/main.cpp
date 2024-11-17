#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *p = head;
        ListNode *q = head -> next;
        while(q != nullptr){
            ListNode *temp = q -> next;
            q -> next = p;
            p = q;
            if(temp == nullptr){
                break;
            }
            q = temp;
        }
        head->next = nullptr;
    }
};

int main() {

    return 0;
}
