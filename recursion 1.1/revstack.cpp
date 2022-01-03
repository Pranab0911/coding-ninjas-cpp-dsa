#include<bits/stdc++.h> 
using namespace std; 
  

  
// intializing a string to store 
// result of reversed stack 
string ns; 
  

void insert(stack<int>&st,int temp){
    //insert temp at the bottom
    if(st.size()==0){
        st.push(temp);
        return;
    }
    //Hypothesis
  int val  = st.top();
  st.pop();
  insert(st,temp);
  //Induction 
  st.push(val);

}



void reverse(stack<int>&st){
    
    if( st.size()==1){
        return;
    }

    //Hypothesis
    int temp = st.top();
    st.pop();
    reverse(st);

    //Induction
    insert(st,temp);

}


int main(){
    stack<int> st; 
     // push elements into  
    // the stack 
    st.push(1); 
    st.push(2); 
    st.push(3); 
    st.push(4); 
      
    cout<<"Original Stack"<<endl; 
      
    // print the elements  
    // of original stack 
    cout<<"1"<<" "<<"2"<<" "
        <<"3"<<" "<<"4"
        <<endl; 
      
    // function to reverse  
    // the stack 
    reverse(st);
    while(!(st.empty())){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}