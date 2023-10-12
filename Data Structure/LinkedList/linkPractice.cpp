#include <iostream>
using namespace std;

// Define a struct for the node
struct Node {
    int value;
    Node* link;
};

int main() {
    Node* start = nullptr;
    Node* node1 = nullptr;
    Node* node2 = nullptr;
    Node* node3 = nullptr;
    Node* node4 = nullptr;
    Node* node5 = nullptr;

    node1 = new Node();
    node2 = new Node();
    node3 = new Node();
    node4 = new Node();
    node5 = new Node();

    node1->value = 7;
    node2->value = 5;
    node3->value = 1;
    node4->value = 4;
    node5->value = 3;

    node1->link = node2;
    node2->link = node3;
    node3->link = node4;
    node4->link = node5;
    node5->link = nullptr;

    Node* p;

    // Set the start pointer to point to the first node
    start = node1;

    p = start->link->link;
    start->link->link = p->link->link;
    p->link->link = p;

    cout << start->link->link->link->link->value << endl;

    // Free allocated memory
    delete node1;
    delete node2;
    delete node3;
    delete node4;
    delete node5;

    return 0;
}
