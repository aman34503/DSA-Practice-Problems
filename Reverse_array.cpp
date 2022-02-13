#include<iostream>
using namespace std;

// int reverse(int arr[],int n){
// 	int start= 0;
// 	int end = n-1;

// 	if(start>end){
// 		return 0;
// 	}
// 	else{
// 		swap(arr[start] ,arr[end]);
// 	}
// 	reverse(arr, n);
// 	return 0;
// }

int reverse(int arr[], int n){
	int start=0;
	int end =n-1;

	while(start<end){
		swap(arr[start], arr[end]);
		start += 1;
		end -= 1;
	}
}

int main(){
int n;
cin>>n;
int arr[n];

for(int i=0; i<n; i++){
	cin>>arr[i];
}


// for(int i=0; i<n; i++){
// 	cout<<arr[i]<<endl;
// }

reverse(arr, n);

for(int i=0; i<n; i++){
	cout<<arr[i]<<endl;
}
return 0;
}
