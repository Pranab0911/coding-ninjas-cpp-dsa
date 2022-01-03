#include <iostream>
using namespace std;

void printArray(int input[], int n) {
	for(int i = 0; i < n; i++) {
		cout << input[i] << " " ;
	}
	cout << endl;
}

void bubbleSort(int arr[], int n) {
for(int j=0;j<n-1;j++){
	for(int i=0;i<n-j-1;i++){
		if(arr[i]>arr[i+1]){
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
}
}

int main() {
	// Take array input from the user
	int n;
	cin >> n;

	int input[n];
	
	for(int i = 0; i < n; i++) {
		cin >> input[i];
	}
	
	bubbleSort(input, n);

	printArray(input, n);
	
}