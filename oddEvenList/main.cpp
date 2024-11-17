#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class LinkedList{
private:
    ListNode *head;
public:
    LinkedList() : head(nullptr){};
    void addNode(int val);
    void print();
    ListNode* oddEvenList();
    ListNode* deleteMiddle();
};
void LinkedList::addNode(int val) {
    ListNode *newNode = new ListNode(val);
    if(head == nullptr){
        head = newNode;
    }else{
        ListNode *current = head;
        while(current ->next != nullptr){
            current = current -> next;
        }
        current -> next = newNode;
    }
}
void LinkedList::print() {
    if(this -> head == nullptr){
        return;
    }else{
        ListNode *current = head;
        while(current != nullptr){
            std::cout << current -> val << "->";
            current = current -> next;
        }
        std::cout << std::endl;
    }
}

ListNode* LinkedList::oddEvenList() {
    ListNode *head = this->head;
    if(head == nullptr){
        return head;
    }
    int i = 1;
    ListNode *rearodd, *reareven;
    rearodd = head;
    ListNode *even_head = head -> next;
    reareven = head -> next;
    ListNode *cursor = reareven -> next;
    if(reareven == nullptr || cursor == nullptr){
        return head;
    }
    while(cursor != nullptr){
        if(i % 2 == 0){
            reareven -> next = cursor;
            reareven = reareven -> next;
        }else{
            rearodd -> next = cursor;
            rearodd = rearodd -> next;
        }
        i += 1;
        cursor = cursor -> next;
    }
    rearodd -> next = even_head;
    reareven -> next = nullptr;
    return head;
}

ListNode* LinkedList::deleteMiddle() {
    ListNode *head = this->head;
    if(head == nullptr || head -> next == nullptr){
        return nullptr;
    }
    ListNode *prev_slow, *slow, *fast;
    prev_slow = head;
    slow = head;
    fast = head;
    while(fast != nullptr && fast -> next != nullptr){
        prev_slow = slow;
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    prev_slow -> next= slow -> next;
    return head;
}

int main() {
    LinkedList list;
    list.addNode(1);
    list.addNode(2);
    list.addNode(3);
    list.addNode(4);
//    list.oddEvenList();
    list.deleteMiddle();
    list.print();
    return 0;
}
