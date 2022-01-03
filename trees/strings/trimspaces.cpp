#include<iostream>
using namespace std;
void trimspaces(char *arr){
    int i,j=0;
    for( i=0;arr[i]!='\0';i++){
        if(arr[i]!=' '){
            arr[j]=arr[i];
            j++;
        }
    }
    arr[j]='\0';
}
int main(){
char arr[1000];

cin.getline(arr,1000);
trimspaces(arr);
cout<<arr<<endl;

return 0;
}