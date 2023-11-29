#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize data and set next to nullptr
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

int main() {
    // Creating a Node with data 42
    Node* myNode = new Node(42);

    // Accessing the data and next pointer
    cout << "Data in the node: " << myNode->data << endl;
    cout << "Next pointer: " << myNode->next << endl;

    // Don't forget to free the memory allocated for the node
    delete myNode;

    return 0;
}
