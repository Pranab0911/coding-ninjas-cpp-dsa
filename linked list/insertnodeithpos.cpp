/*insert the given ith node in the linked list*/
#include<iostream>
using namespace std;
class Node{
   public:
   int data;
   Node *next;
   Node(int data){
       this -> data = data;
       next=NULL;
   }
};
Node* takeinput(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data != -1){
        Node *newNode= new Node(data);
        if(head == NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
        cin>>data;
    }
    return head;
}
Node* insertnode(int i, Node *head,int data){
    Node *newNode=new Node(data);
    int count=0;
    Node *temp=head;
    if(i==0){
        newNode->next=head;
        head =newNode;
        return head;
    }
    while(temp != NULL && count<i-1){
               count++;
               temp=temp->next;       
    }
    if(temp != NULL){
          newNode->next=temp->next;// Node *a=temp->next;
          temp->next=newNode;//       temp->next=newNode;
    }
    return head;                               //newNode->next=a; 
}
void print(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    Node *head=takeinput();
    print(head);
    int i,data;
    cin>>i>>data;
    head=insertnode(i,head,data);
    print(head);
}