#include<iostream>
using namespace std;

int bubble_sort(int arr[], int n){
	bool swp;
	for(int i=0; i<n; i++){
		swp =false;
		for(int j = 0; j<n-1-i; j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j], arr[j+1]);
				swp = true;
			}
		}
		if(swp == false){
			break;
		}
	}
}

int main(){
	int n;
	cin>>n;
		int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	bubble_sort(arr, n);

	for(int i= 0; i<n; i++){
		cout<<arr[i]<<endl;
	}

	return 0;
}