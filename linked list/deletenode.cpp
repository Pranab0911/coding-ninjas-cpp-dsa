#include <iostream>

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;


Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}
Node *deleteNode(Node *head, int pos)
{
        if(head == NULL){//head’ node is null: an empty linked list has been passed
        return head;
    }
    if(pos == 0){
        return head->next;
    }
    Node *temp=head;
    int count =0;
    while(temp != NULL && count < pos-1){
        count++;
        temp=temp->next;
    }
    if(temp ==NULL || temp -> next ==NULL){//. The index is out of bounds of the linked list: 
    //he index is negative or it’s greater
//than or equal to the size of the linked list.
        return head;
    }
    temp->next=temp->next->next;
    return head;
}
void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	
		Node *head = takeinput();
		int pos;
		cin >> pos;
		head = deleteNode(head, pos);
		print(head);
	

	
}