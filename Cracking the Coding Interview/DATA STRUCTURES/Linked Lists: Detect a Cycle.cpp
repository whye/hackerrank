//https://www.hackerrank.com/challenges/ctci-linked-list-cycle

#include <set>
/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    if(head == NULL){
        return false;
    }
    Node *temp;
    temp = head;
    std::set<Node *> nodes; 
    while(temp != NULL){
        if(nodes.find(temp) != nodes.end()){
            return true;
        }
        nodes.insert(temp);
        temp = temp->next;
    }
    return false;
}
