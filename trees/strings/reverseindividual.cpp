#include<iostream>
#include<cstring>
using namespace std;
void reverse(char *arr,int i,int j){
          while(i<=j){
              char temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
              i++;
              j--;
          }
}
void reverseindividual(char *arr){
    int n=strlen(arr);
         int start=0,end=0,i;
         for( i=0;i<n;i++){
             if(arr[i]==' '){
                 end=i-1;
                 reverse(arr,start,end);
                 start=i+1;
                 
             }
         }
         end=i-1;
         reverse(arr,start,end);
}
int main(){
char arr[1000];
cin.getline(arr,1000);
reverseindividual(arr);
cout<<arr<<endl;
}