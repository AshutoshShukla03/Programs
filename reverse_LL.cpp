#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL) {
        Node* next = curr->next; // store
        curr->next = prev;       // reverse
        prev = curr;             // move prev
        curr = next;             // move curr
    }

    return prev;
}