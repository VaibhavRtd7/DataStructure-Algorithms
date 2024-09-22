#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertNode(int d, Node* &tail) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;  
}

void printNodes(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    } 
    cout << endl;
}

void removeNode(Node* &head, int d) {
    Node* temp = head;
    Node* prev = NULL;
    
    // Handle the case for the head node
    if (head != NULL && head->data == d) {
        head = head->next;  
        delete temp;        // Free the old head node
        return;
    }

    // Traverse the list and find the node to delete
    while (temp != NULL && temp->data != d) {
        prev = temp;
        temp = temp->next;
    }
    
    // If the node to be deleted was not found
    if (temp == NULL) return;

    // Unlink the node from the list
    prev->next = temp->next;

    // Free memory
    delete temp;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
   
    insertNode(20, tail);
    insertNode(30, tail);
    insertNode(40, tail);
    insertNode(50, tail);
   
    printNodes(head);
   
    // After removing node
    removeNode(head, 10);  // Remove the head node
    printNodes(head);
   
    removeNode(head, 30);  // Remove a middle node
    printNodes(head);

    removeNode(head, 50);  // Remove the tail node
    printNodes(head);

    return 0;
}
