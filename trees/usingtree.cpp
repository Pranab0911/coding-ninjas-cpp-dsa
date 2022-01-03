#include<iostream>
#include<queue>
#include "TreeNode.h"
using namespace std;
TreeNode<int>* takeinputlikewise(){
    int rootdata;
    cout<<"enter root data "<<endl;
    cin>>rootdata;
    TreeNode<int>* root=new TreeNode<int>(rootdata);
    queue<TreeNode<int>*> pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0){
    TreeNode<int>* front=pendingnodes.front();
    pendingnodes.pop();
    cout<<"enter num of children of "<<front->data<<endl;
    int numchild;
    cin>>numchild;
    for(int i=0;i<numchild;i++){
        int childdata;
        cout<<"enter "<<i<<" th child of "<<front->data;
        cin>>childdata;
        TreeNode<int>* child=new TreeNode<int>(childdata);
        front->children.push_back(child);
        pendingnodes.push(child);

    }
    }
    return root;
}



TreeNode<int>* takeinput(){
    int rootdata;
    cout<<"enter data"<<endl;
    cin>>rootdata;
    TreeNode<int>* root=new TreeNode<int>(rootdata);
    int n;
    cout<<"enter child data "<<rootdata<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        TreeNode<int>* child=takeinput();
        root->children.push_back(child);
    }
    return root;

}
void print(TreeNode<int>* root){
    cout<<root->data<<" : ";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
         print(root->children[i]);
    }

}
int main(){
// TreeNode<int>* root=new TreeNode<int> (1);
// TreeNode<int>* node1=new TreeNode<int> (2);
// TreeNode<int>* node2=new TreeNode<int> (3);
// root->children.push_back(node1);
// root->children.push_back(node2);
TreeNode<int>* root=takeinputlikewise();
print(root);
return 0;
}