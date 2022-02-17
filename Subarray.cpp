#include<iostream>
using namespace std;

int subArray(int arr[],int n){
	int sum = 0;
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			int subarraysum = 0;
			for(int k=i; k<=j; k++){
				 // cout<<arr[k]<<" ";
				 subarraysum = subarraysum +arr[k];
			}
			sum = max(sum, subarraysum);
			
		}
		
		
	}
	cout<< sum;
	
}

int main(){

int n;
cin>>n;
// int target;
// cin>>target;
int arr[n];

for(int i=0; i<n; i++){
	cin>>arr[i];
}
	subArray(arr, n);

	return 0;
}
