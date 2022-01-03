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
Node* deletenoderec(Node *head,int i){
        if(i==0){
            Node *temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        if(head == NULL || i<0){
            return head;
        }
        head->next=deletenoderec(head->next,i-1);
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
    int i;
    cin>>i;
    head=deletenoderec(head,i);
    print(head);
}