#include<iostream>
#include<cstring>
using namespace std;
void reversewords(char *arr,int i,int j){
    while(i<j){
        char temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
void reversewordwise(char *arr){
    int n=strlen(arr);
    int i=0;
    int j=n-1;
    while(i<j){
        char temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    int start=0,end=0;
    for(i=0;i<n;i++){
        if(arr[i]==' '){
            end=i-1;
            reversewords(arr,start,end);
            start=i+1;
            
          
        }
    }
    end=i-1;
    reversewords(arr,start,end);
}
int main(){
char arr[10000];
cin.getline(arr,10000);
reversewordwise(arr);
cout<<arr<<endl;

return 0;
}