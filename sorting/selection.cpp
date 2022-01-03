#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter size of array: ";
cin>>n;
int arr[n];
cout<<"Enter array elements: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}                                           // in selection sort in an unsorted array we find the 
                                            //samllest number and swap it to the begning of the qrrqy

for(int i=0;i<n-1;i++){                    //3 5 6 2 1
                                            //1 5 6 2 3
    for(int j=i+1;j<n;j++){                 //1 2 6 5 3
        if(arr[j]<arr[i]){                  //1 2 3 5 6
            int temp=arr[j];                
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
}
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

return 0;
}