#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next=NULL;
    node(int data){
        this->data=data;
        next=NULL;
    }
};
node* input(){
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;
    while(data!=-1){
          node *newnode=new node(data);
          if(head==NULL){
              head=newnode;
              tail=newnode;
          }
          else{
              tail->next=newnode;
              tail=newnode;
          }
          cin>>data;
    }
    return head;
}
void printithnode(node *head,int i){
    node *temp=head;
    int count=0;
    while(temp!=NULL){
         if(count==i){
             cout<<temp->data<<" ";
             return;
         }
 count++;
 temp=temp->next;
    }
}
int main(){
node *head = input();
int i;
cin>>i;
printithnode(head,i);
cout<<endl;
return 0;
}