/*sort 012*/
//input- 1 0 2 0 1 
//output- 0 0 1 1 2
#include<iostream>
using namespace std;
void sort012(int *arr, int n)
{
    //Write your code here
    int lo = 0;
    int hi = n - 1;
    int mid = 0;
 
    // Iterate till all the elements
    // are sorted
    while (mid <= hi) {
        switch (arr[mid]) {
 
        // If the element is 0
        case 0:
            swap(arr[lo++], arr[mid++]);
            break;
 
        // If the element is 1 .
        case 1:
            mid++;
            break;
 
        // If the element is 2
        case 2:
            swap(arr[mid], arr[hi--]);
            break;
        }
    }
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort012(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}