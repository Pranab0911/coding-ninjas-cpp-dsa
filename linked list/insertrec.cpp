#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
Node* takeinput(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data != -1){
        Node *newNode=new Node(data);
        if(head==NULL){
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
Node* insert(int data,int i,Node *head){
           Node *newNode=new Node(data);
           
       if(i==0){
           newNode->next=head;
           head=newNode;
           return head;
       }
       if(head==NULL || i<0){
           return head;
       }
       head->next=insert(data,i-1,head->next);
       return head;
}
void print(Node *head){
    Node *temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node *head = takeinput();
    int i,data;
    cin>>i>>data;
    head=insert(data,i,head);
    print(head);
}