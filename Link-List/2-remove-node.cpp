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

void insertNode(int d, Node* &tail)  {
    
    Node* temp = new Node(d);
    
    tail->next=temp;
    tail=temp;  

}

void printNodes(Node* &head) {
    
    Node* temp=head;
    while(temp != NULL) {
        cout<< temp->data << " ";
        temp=temp->next;
    } cout << endl;
    
}

void removeNode(Node* &head, int d) {
    
    Node* temp=head;
    
    // Handle case for head node
    if(head->data == d) {
        head=head->next;
    }
    
    // otherwise do this
    // 10  20  30  40  50
    while (temp != NULL && temp->next != NULL) {   // if you don't want to add another condition then remove it and add break statement in if loop
        
        if(temp->next->data == d) {
            temp->next = temp->next->next;
            // break;
        }
        temp = temp->next;
    }
    
}

int main()
{

   Node* node1 = new Node(10);
   Node* head=node1;
   Node* tail=node1;
   
   insertNode(20, tail);
   insertNode(30, tail);
   insertNode(40, tail);
   insertNode(50, tail);
   
   printNodes(head);
   
   // After remove node
   removeNode(head, 10);
   printNodes(head);
   

    return 0;
}
