#include <iostream>
using namespace std;

// Creating a node
struct Node {
    int data;
    Node* next;
};

// Print the linked list datas
void printLinkedList(Node* p) {
    // checking list if empty 
    // if (!p) {
    //     cout << "Linked list is empty\n";
    //     return;
    // }
    // // checking list if it has data 
    // if (p) {
    //     cout << "Linked is not empty:\n";
    // }
    // while (p != nullptr) {
    //     cout << p->data << " " << p->next;
    //     cout << "\n";
    //     p = p->next;
    // }
}

int main() {
    // Initialize nodes
    Node* head = nullptr;
    Node* one = nullptr;
    Node* two = nullptr;
    Node* three = nullptr;

    // Allocate memory
    one = new Node();
    two = new Node();
    three = new Node();

    // Assign datas
    one->data = 1;
    two->data = 2;
    three->data = 3;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = nullptr;

    // Set head pointer
    head = one;

    // Print node datas
    printLinkedList(head);

    // Free memory (important in C++)
    delete one;
    delete two;
    delete three;

    return 0;
}
