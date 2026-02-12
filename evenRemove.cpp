#include <iostream>
using namespace std;


struct node {
    const int value;
    node* next;
    node(const int value, node* nextNode = nullptr) : value(value), next(nextNode) {}
};

node *mysteryAdd(node *head, const int &val) {
    if (head == nullptr) {
        return new node(val);
    }
    if (head->next == nullptr) {
        head->next = new node(val,head->next);
        return nullptr;
    }
    mysteryAdd(head->next, val);
    return nullptr;
}

node *evenRemove(node *head) {
   /* Add your code here */
}

void nodeTest()
{
    node* head = nullptr;
    int vals[] = {0,2,3,4,5,6,8,10,11,12,14};
    for (int i = 0; i < sizeof(vals)/sizeof(vals[0]); ++i) {
        if (head == nullptr) {
            head = mysteryAdd(head, vals[i]);
        } else {
            mysteryAdd(head, vals[i]);
        }
    }

    head = evenRemove(head);
    node* current = head;
    while (current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}