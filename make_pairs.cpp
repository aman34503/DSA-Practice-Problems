#include<iostream>
using namespace std;


//Printing All Pairs

// int makePairs(int arr[], int n){

// 	for(int i=0; i<n; i++){
// 			int x = arr[i];
// 		for(int j = i+1; j<n; j++){
// 			int y = arr[j];

// 			cout<<x<<"and"<<y<<endl;
// 		}
// 		cout<<endl;
// 	}
// }

// pairs which have target sum

int makePairs(int arr[], int n, int target){
	int x,y;
	for(int i=0; i<n; i++)
		// int x = arr[i];
		for(int j=i+1; j<n; j++)
		// int y = arr[j];
			if(arr[i]+arr[j]==target)
		cout<<arr[i]<<"and"<<arr[j]<<endl;
	
	return 0;
}


int main(){

int n;
cin>>n;
int target;
cin>>target;
int arr[n];

for(int i=0; i<n; i++){
	cin>>arr[i];
}


// for(int i=0; i<n; i++){
// 	cout<<arr[i]<<endl;
// }

// makePairs(arr, n);
makePairs(arr, n,target);

// for(int i=0; i<n; i++){
// 	cout<<arr[i]<<endl;
// }
return 0;
}