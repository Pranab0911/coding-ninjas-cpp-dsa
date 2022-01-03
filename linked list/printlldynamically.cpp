#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node (int data){
        this -> data = data;
        next = NULL;
    }
};
void print(Node *head){
   Node *temp = head;
   temp = head;
   while(head != NULL)
   {
          cout << head -> data << " ";
          head = head -> next;
   }


}
int main(){
Node *n1 = new Node (1);
Node *head = n1;
Node *n2 = new Node (2);
Node *n3 = new Node (3);
Node *n4 = new Node (4);
n1 -> next = n2;
n2 -> next = n3;
n3 -> next = n4;
print(head);
return 0;
}