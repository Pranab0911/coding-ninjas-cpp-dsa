#include<iostream>
#include<cstring>
using namespace std;
void reversewholestring(char *arr){
    char len=strlen(arr);
    int i=0;
    int j=len-1;
    while(i<j){
        char temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

}
int main(){
char arr[100];
cin.getline(arr,100);
reversewholestring(arr);
cout<<arr<<endl;
return 0;
}