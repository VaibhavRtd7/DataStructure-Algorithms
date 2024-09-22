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
   
  return 0;
}
